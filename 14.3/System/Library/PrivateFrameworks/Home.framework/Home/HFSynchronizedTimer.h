@class NSTimer, NSMapTable;

@interface HFSynchronizedTimer : NSObject

@property (retain, nonatomic) NSTimer *activeTimer;
@property (readonly, nonatomic) NSMapTable *observers;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_updateTimerState;
- (void)_timerDidFire;

@end
