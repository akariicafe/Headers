@class NSUUID, NSError, HMFTimer, NSString, NSDate, HMFActivity, NSArray, NSObject;
@protocol OS_dispatch_queue, OS_voucher;

@interface HMFOperation : NSOperation <HMFLogging, HMFTimerDelegate, HMFObject> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _executing;
    BOOL _finished;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_voucher> *_voucher;
    BOOL _qosWasSet;
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
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)shortDescription;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)logCategory;

- (void)finish;
- (void)setQualityOfService:(long long)a0;
- (void)timerDidFire:(id)a0;
- (BOOL)isExecuting;
- (id)logIdentifier;
- (BOOL)isFinished;
- (void)main;
- (void)cancelWithError:(id)a0;
- (void)cancel;
- (BOOL)isAsynchronous;
- (id)initWithTimeout:(double)a0;
- (id)init;
- (void)start;
- (void).cxx_destruct;

@end
