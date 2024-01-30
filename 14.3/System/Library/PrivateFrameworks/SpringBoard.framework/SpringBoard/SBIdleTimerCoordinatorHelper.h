@class NSMapTable;
@protocol SBIdleTimerProviding, SBIdleTimerCoordinating;

@interface SBIdleTimerCoordinatorHelper : NSObject

@property (weak, nonatomic) id<SBIdleTimerProviding> sourceProvider;
@property (readonly, nonatomic) NSMapTable *idleTimerCache;
@property (weak, nonatomic) id<SBIdleTimerCoordinating> targetCoordinator;

- (id)updateProvider:(id)a0 behavior:(id)a1 reason:(id)a2;
- (id)init;
- (id)initWithSourceProvider:(id)a0;
- (void).cxx_destruct;
- (id)_updateProviderInfo:(id)a0 behavior:(id)a1 reason:(id)a2;
- (id)_updateProvider:(id)a0 behavior:(id)a1 reason:(id)a2;
- (BOOL)hasProvider:(id)a0;
- (id)proposeIdleTimerBehavior:(id)a0 fromProvider:(id)a1 reason:(id)a2;
- (id)proposeProvider:(id)a0 byCoordinator:(id)a1 reason:(id)a2;
- (id)idleTimerProxyForProvider:(id)a0;
- (void)removeProvider:(id)a0;
- (void)bindProvider:(id)a0 toSourceTimer:(id)a1 behavior:(id)a2 forReason:(id)a3;

@end
