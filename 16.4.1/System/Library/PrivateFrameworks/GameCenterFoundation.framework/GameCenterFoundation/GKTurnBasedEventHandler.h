@class NSObject;
@protocol OS_dispatch_queue, GKTurnBasedEventHandlerDelegate;

@interface GKTurnBasedEventHandler : NSObject

@property (nonatomic) BOOL didBecomeActive;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lookForEventQueue;
@property (weak, nonatomic) NSObject<GKTurnBasedEventHandlerDelegate> *delegate;

+ (id)sharedTurnBasedEventHandler;

- (id)init;
- (void).cxx_destruct;
- (void)callTurnEventForMatch:(id)a0 userTapped:(BOOL)a1;
- (void)lookForEvent;

@end
