@class NSArray, NSDictionary, NSHashTable, TURoute, NSObject;
@protocol OS_dispatch_queue, TURouteControllerActions;

@interface TURouteController : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak, nonatomic) id<TURouteControllerActions> actionsDelegate;
@property (readonly, nonatomic) NSHashTable *delegates;
@property (copy, nonatomic) NSDictionary *routesByUniqueIdentifier;
@property (readonly, copy, nonatomic) NSArray *routes;
@property (readonly, copy, nonatomic) TURoute *pickedRoute;
@property (readonly, copy, nonatomic) TURoute *receiverRoute;
@property (readonly, copy, nonatomic) TURoute *speakerRoute;

- (void)handleServerDisconnect;
- (id)routeWithSourceIdentifier:(id)a0;
- (void)pickRouteWhenAvailableWithUniqueIdentifier:(id)a0;
- (void)requeryRoutes;
- (void)pickRoute:(id)a0;
- (void)handleServerReconnect;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (id)initWithActionsDelegate:(id)a0 serialQueue:(id)a1;
- (void)handleRoutesByUniqueIdentifierUpdated:(id)a0;
- (void)pickRouteWithUniqueIdentifier:(id)a0;
- (void).cxx_destruct;

@end
