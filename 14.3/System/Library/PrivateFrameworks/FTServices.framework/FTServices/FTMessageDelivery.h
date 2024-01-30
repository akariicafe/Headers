@class NSString, IDSBaseMessage, NSArray, FTMessageQueue, NSNumber, IMTimer;

@interface FTMessageDelivery : NSObject <FTMessageQueueDelegate> {
    unsigned int _retries;
    FTMessageQueue *_queue;
    IMTimer *_timer;
}

@property (copy) NSString *userAgent;
@property (copy) NSNumber *protocolVersion;
@property (readonly) BOOL hasQueuedItems;
@property (readonly) BOOL busy;
@property BOOL retryInAirplaneMode;
@property BOOL logToRegistration;
@property (readonly) IDSBaseMessage *currentMessage;
@property (readonly) NSArray *queuedMessages;
@property (readonly) NSArray *allMessages;
@property (readonly) long long maxMessageSize;
@property (readonly) long long maxLargeMessageSize;
@property unsigned long long maxConcurrentMessages;
@property (nonatomic) BOOL disallowRetry;

+ (id)alloc;
+ (id)_errorForTDMessageDeliveryStatus:(long long)a0 userInfo:(id)a1;
+ (Class)HTTPMessageDeliveryClass;
+ (Class)APNSMessageDeliveryClass;

- (BOOL)sendMessage:(id)a0;
- (id)init;
- (id)_queue;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_retryTimerHit:(id)a0;
- (void)_informDelegateAboutMessage:(id)a0 error:(id)a1 result:(id)a2 resultCode:(long long)a3;
- (void)_setRetryTimer:(double)a0;
- (void)_signMessage:(id)a0 useDataSignatures:(BOOL)a1 body:(id)a2 queryString:(id)a3 intoDictionary:(id)a4;
- (void)networkStateChanged;
- (BOOL)_sendMessageAsynchronously:(id)a0 error:(id *)a1;
- (void)queue:(id)a0 hitTimeoutForMessage:(id)a1;
- (void)_clearRetryTimer;
- (void)cancelMessage:(id)a0;
- (void)invalidate;

@end
