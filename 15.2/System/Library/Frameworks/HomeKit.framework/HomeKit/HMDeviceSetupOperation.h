@class TRSession, HMDeviceSetupSession, NSString, HMAccessory, NSError, NSObject, HMFUnfairLock;
@protocol OS_dispatch_queue;

@interface HMDeviceSetupOperation : NSOperation <HMDeviceSetupSessionDelegate, HMFLogging> {
    HMFUnfairLock *_lock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) HMDeviceSetupSession *setupSession;
@property (getter=isExecuting) BOOL executing;
@property (getter=isFinished) BOOL finished;
@property (readonly, weak) TRSession *session;
@property (readonly) NSError *error;
@property (readonly) HMAccessory *accessory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)finish;
- (id)initWithSession:(id)a0;
- (BOOL)isAsynchronous;
- (id)logIdentifier;
- (void)setAccessory:(id)a0;
- (void)setQualityOfService:(long long)a0;
- (void)start;
- (void)setError:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)cancelWithError:(id)a0;
- (void)dealloc;
- (void)cancel;
- (void)setupSession:(id)a0 didCloseWithError:(id)a1;
- (void)setupSession:(id)a0 didReceiveExchangeData:(id)a1 completionHandler:(id /* block */)a2;

@end
