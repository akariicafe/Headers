@class NSObject, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface BYSetupStateNotifier : NSObject

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSMutableArray *generalStateNotificationBlocks;
@property (retain, nonatomic) NSMutableDictionary *specificStateNotificationBlocks;
@property (retain, nonatomic) NSMutableArray *exclusiveNotificationBlocks;
@property (retain, nonatomic) NSMutableArray *relaunchStateNotificationBlocks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic) BOOL shouldRelaunchSetup;
@property (nonatomic) int stateNotificationToken;
@property (nonatomic) int shouldRemainAliveNotificationToken;
@property (nonatomic) int exclusiveNotificationToken;

+ (id)sharedNotifier;

- (void)addObserverWhenSetupIsNoLongerExclusiveWithNotificationBlock:(id /* block */)a0;
- (void)notifySetupShouldRemainAlive;
- (unsigned long long)currentState;
- (void)notifyStateChangedTo:(unsigned long long)a0;
- (void)addRelaunchStateChangeObserver:(id /* block */)a0;
- (void)addStateChangeObserver:(id /* block */)a0;
- (void)dealloc;
- (void)_noLongerExclusiveNotificationFired;
- (void)_shouldRemainAliveNotificationFired;
- (void)_beginObservingState;
- (id)init;
- (void)_stateChangedTo:(unsigned long long)a0;
- (void)_endObservingState;
- (void).cxx_destruct;
- (void)addStateCompletionObserver:(id /* block */)a0 forState:(unsigned long long)a1;

@end
