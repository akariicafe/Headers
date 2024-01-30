@class HMFTimer, NSUUID, NSError, NSString, NSDate, NSObject, HMFActivity;
@protocol OS_dispatch_queue, OS_voucher;

@interface HMFOperation : NSOperation <HMFLogging, HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _executing;
    BOOL _finished;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_voucher> *_voucher;
}

@property (readonly) NSUUID *identifier;
@property (readonly, nonatomic) HMFTimer *timer;
@property (readonly) NSObject<OS_dispatch_queue> *underlyingQueue;
@property (retain) HMFActivity *activity;
@property (readonly, copy) NSDate *timeoutDate;
@property (readonly, copy) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)cancel;
- (void)finish;
- (void)setQualityOfService:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTimeout:(double)a0;
- (void)main;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)cancelWithError:(id)a0;
- (void)timerDidFire:(id)a0;
- (BOOL)isAsynchronous;
- (void)start;
- (id)logIdentifier;

@end
