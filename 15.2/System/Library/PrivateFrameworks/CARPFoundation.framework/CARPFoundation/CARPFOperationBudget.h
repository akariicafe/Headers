@class NSString, CARPFTimer;

@interface CARPFOperationBudget : CARPFObject <CARPFLogging, CARPFTimerDelegate> {
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
    CARPFTimer *_timer;
}

@property (readonly, nonatomic) unsigned long long limit;
@property (readonly, nonatomic) struct _CARPFRate { unsigned long long value; double period; } rate;
@property (readonly) unsigned long long value;
@property (readonly, getter=isFull) BOOL full;
@property (readonly, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)timerDidFire:(id)a0;
- (BOOL)decrement;
- (id)initWithLimit:(unsigned long long)a0 rate:(struct _CARPFRate { unsigned long long x0; double x1; })a1;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (BOOL)decrementByCount:(unsigned long long)a0;

@end
