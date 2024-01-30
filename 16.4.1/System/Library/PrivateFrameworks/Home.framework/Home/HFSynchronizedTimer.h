@class NSTimer, NSMapTable;

@interface HFSynchronizedTimer : NSObject

@property (retain, nonatomic) NSTimer *activeTimer;
@property (readonly, nonatomic) NSMapTable *observers;

+ (id)sharedInstance;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_timerDidFire;
- (id)init;
- (void).cxx_destruct;
- (void)_updateTimerState;

@end
