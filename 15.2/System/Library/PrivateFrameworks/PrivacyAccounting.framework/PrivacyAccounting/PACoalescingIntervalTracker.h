@class PAAccessLogger, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface PACoalescingIntervalTracker : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_source> *_coalescingTimer;
    NSMutableDictionary *_coalescingIntervals;
}

@property (readonly, weak, nonatomic) PAAccessLogger *logger;
@property double idleTimeout;

- (id)initWithLogger:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)coalesce:(id)a0;
- (void)dealloc;
- (void)lockedStartCoalescingTimer;
- (void)didFireCoalescingTimer;
- (void)lockedStopCoalescingTimer;

@end
