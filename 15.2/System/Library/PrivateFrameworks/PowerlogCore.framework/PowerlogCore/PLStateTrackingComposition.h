@class NSMutableDictionary, NSDate, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PLStateTrackingComposition : NSObject

@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) NSMutableDictionary *executeBlockCache;
@property (retain) NSMutableArray *stateChangeNotifications;
@property unsigned long long stateChangeMask;
@property (retain) NSDate *systemStateChangeTime;
@property (retain) NSMutableDictionary *stateIDToStateMap;
@property (retain) NSMutableDictionary *entryKeyToStateMap;

+ (id)sharedInstance;
+ (void)registerState:(Class)a0;

- (BOOL)stateChanged:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)initializeState;
- (void)registerForListeners;
- (void)handleStateChange:(id)a0;
- (void)triggerBlocks;
- (void)registerForStates:(unsigned long long)a0 withOperator:(id)a1 withBlock:(id /* block */)a2;
- (id)getStateChangeTime:(unsigned long long)a0;
- (id)getLastState:(unsigned long long)a0;
- (id)getCurrState:(unsigned long long)a0;
- (id)getStateBeforeSystemStateChange:(unsigned long long)a0;
- (id)getState:(unsigned long long)a0 beforeDate:(id)a1;
- (id)getSystemStateChangeTime;

@end
