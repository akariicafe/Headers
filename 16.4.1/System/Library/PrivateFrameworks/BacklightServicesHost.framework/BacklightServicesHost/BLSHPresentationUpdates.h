@class NSMutableArray, NSDate;

@interface BLSHPresentationUpdates : NSObject {
    NSDate *_startDate;
    NSMutableArray *_updates;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _invalidated;
}

@property (readonly, nonatomic, getter=isCompleted) BOOL completed;
@property (readonly, nonatomic) NSDate *nextUpdatesStart;
@property (readonly, nonatomic) unsigned long long count;

- (void)dealloc;
- (id)description;
- (id)invalidate;
- (void).cxx_destruct;
- (id)dequeueAllUpdates;
- (id)dequeueNextUpdate;
- (id)initWithStartDate:(id)a0 updates:(id)a1 nextUpdatesStart:(id)a2;
- (BOOL)isValidWithNowDate:(id)a0;
- (id)peekNextUpdate;

@end
