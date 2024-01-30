@class HMFTimer, NSMutableArray, NSString;
@protocol HMDTimerManagerDelegate, HMDTimerManagerDataSource;

@interface HMDTimerManager : NSObject <HMFTimerDelegate, HMDTimerManager> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSMutableArray *sortedTimerContexts;
@property (retain, nonatomic) HMFTimer *timer;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) id<HMDTimerManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMDTimerManagerDelegate> delegate;

- (void)timerDidFire:(id)a0;
- (id)initWithOptions:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_evaluateTimers;
- (void)cancelTimerForContext:(id)a0;
- (id)initWithOptions:(unsigned long long)a0 dataSource:(id)a1;
- (id)startTimerWithTimeInterval:(double)a0 object:(id)a1;

@end
