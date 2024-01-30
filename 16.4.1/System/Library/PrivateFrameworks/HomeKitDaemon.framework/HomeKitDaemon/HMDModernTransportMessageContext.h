@class HMFTimer, HMDRemoteMessage, NSUUID, NSMutableSet, NSString, HMFMessageDestination, HMDModernTransportMessageContextOptions;
@protocol HMDTimerProvider, HMDDateProvider;

@interface HMDModernTransportMessageContext : NSObject <HMFTimerDelegate>

@property (copy) id /* block */ completionHandler;
@property (readonly) id<HMDDateProvider> dateProvider;
@property (readonly) id<HMDTimerProvider> timerProvider;
@property (retain) HMFTimer *responseTimer;
@property (copy) id /* block */ responseCompletionBlock;
@property (retain) HMFTimer *fallbackTimer;
@property (copy) id /* block */ fallbackCompletionBlock;
@property double requestStartTime;
@property (readonly) HMDRemoteMessage *message;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSUUID *messageID;
@property (readonly, nonatomic) HMFMessageDestination *destination;
@property (readonly, nonatomic) HMDModernTransportMessageContextOptions *options;
@property (readonly, nonatomic) double timeout;
@property (readonly, nonatomic) BOOL expectsResponse;
@property (readonly, copy, nonatomic) NSMutableSet *remainingTransports;
@property (readonly, copy, nonatomic) NSMutableSet *inProgressTransports;
@property (readonly, nonatomic) BOOL didSucceedSending;
@property (nonatomic) BOOL didNotifyDeviceReachability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)timerDidFire:(id)a0;
- (void)done;
- (void).cxx_destruct;
- (void)completeSendingOverTransport:(id)a0 withError:(id)a1;
- (id)initWithMessage:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2 dateProvider:(id)a3 timerProvider:(id)a4;
- (id)preparedMessageWithTimeout:(double)a0;
- (void)startResponseTimerWithTimeInterval:(double)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (void)startSendingOverTransport:(id)a0;
- (void)startTransportFallbackTimerWithTimeInterval:(double)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (double)timeoutRemaining;

@end
