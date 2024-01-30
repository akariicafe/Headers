@class NSMapTable;
@protocol SBIdleTimerProviding, SBIdleTimerCoordinating;

@interface SBIdleTimerCoordinatorHelper : NSObject

@property (weak, nonatomic) id<SBIdleTimerProviding> sourceProvider;
@property (readonly, nonatomic) NSMapTable *idleTimerCache;
@property (weak, nonatomic) id<SBIdleTimerCoordinating> targetCoordinator;

- (void)removeProvider:(id)a0;
- (id)idleTimerProxyForProvider:(id)a0;
- (id)initWithSourceProvider:(id)a0;
- (BOOL)hasProvider:(id)a0;
- (id)_updateProvider:(id)a0 behavior:(id)a1 reason:(id)a2;
- (id)proposeIdleTimerBehavior:(id)a0 fromProvider:(id)a1 reason:(id)a2;
- (void)bindProvider:(id)a0 toSourceTimer:(id)a1 behavior:(id)a2 forReason:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (id)_updateProviderInfo:(id)a0 behavior:(id)a1 reason:(id)a2;
- (id)updateProvider:(id)a0 behavior:(id)a1 reason:(id)a2;
- (id)proposeProvider:(id)a0 byCoordinator:(id)a1 reason:(id)a2;

@end
