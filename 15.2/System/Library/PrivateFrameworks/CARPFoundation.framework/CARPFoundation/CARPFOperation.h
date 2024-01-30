@class NSString, NSUUID, CARPFActivity, CARPFTimer, NSDate, NSObject, NSError;
@protocol OS_dispatch_queue, OS_voucher;

@interface CARPFOperation : NSOperation <CARPFLogging, CARPFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _executing;
    BOOL _finished;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_voucher> *_voucher;
}

@property (readonly) NSUUID *identifier;
@property (readonly, nonatomic) CARPFTimer *timer;
@property (readonly) NSObject<OS_dispatch_queue> *underlyingQueue;
@property (retain) CARPFActivity *activity;
@property (readonly, copy) NSDate *timeoutDate;
@property (readonly, copy) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)finish;
- (BOOL)isFinished;
- (void)timerDidFire:(id)a0;
- (BOOL)isAsynchronous;
- (id)logIdentifier;
- (void)setQualityOfService:(long long)a0;
- (void)start;
- (BOOL)isExecuting;
- (id)initWithTimeout:(double)a0;
- (void)main;
- (void).cxx_destruct;
- (id)init;
- (void)cancelWithError:(id)a0;
- (void)cancel;

@end
