@class FTMessageDelivery, NSString, IDSBaseMessage, NSArray, FTMessageQueue;

@interface FTMessageDelivery_DualMode : NSObject <FTMessageDeliveryProtocol, FTMessageQueueDelegate> {
    FTMessageDelivery *_httpDelivery;
    FTMessageDelivery *_apsDelivery;
    FTMessageQueue *_dualModeQueue;
    NSString *_userAgentString;
}

@property (copy, nonatomic) NSString *userAgent;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)queue:(id)a0 hitTimeoutForMessage:(id)a1;
- (void)cancelMessage:(id)a0;
- (BOOL)sendMessage:(id)a0;
- (BOOL)_isInBackoffMode;
- (void)_enterBackOffMode;
- (void).cxx_destruct;
- (long long)_randomPercentageChanceForDualDelivery;
- (void)dequeueMessageIfNeeded;
- (void)invalidate;
- (id)initWithPreferedType:(long long)a0;
- (BOOL)_shouldUseDualDeliveryForMessage:(id)a0;
- (void)handleTranslationAndDeliveryOnAPS:(id)a0;

@end
