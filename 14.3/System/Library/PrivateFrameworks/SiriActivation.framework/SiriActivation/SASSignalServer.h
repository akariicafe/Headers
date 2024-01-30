@class NSMutableArray, BSServiceConnectionEndpointInjector, BSServiceConnection;
@protocol BSServiceConnectionHost, SASSignalServerDelegate;

@interface SASSignalServer : NSObject

@property (retain, nonatomic) BSServiceConnectionEndpointInjector *workspaceServiceInjector;
@property (retain, nonatomic) BSServiceConnection<BSServiceConnectionHost> *connection;
@property (nonatomic) BOOL invalidated;
@property (retain, nonatomic) NSMutableArray *waitForConnectBlocks;
@property (weak, nonatomic) id<SASSignalServerDelegate> weak_delegate;

+ (id)serviceQuality;
+ (id)interface;
+ (id)serverForConnection:(id)a0;

- (oneway void)registerButtonIdentifier:(id)a0 withUUID:(id)a1;
- (void)_setConnection:(id)a0;
- (oneway void)activationRequestFromSpotlightWithContext:(id)a0;
- (oneway void)activationRequestFromDirectActionEvent:(id)a0 context:(id)a1;
- (oneway void)activationRequestFromSimpleActivation:(id)a0;
- (void).cxx_destruct;
- (oneway void)buttonTapFromButtonIdentifier:(id)a0;
- (oneway void)cancelPrewarmFromButtonIdentifier:(id)a0;
- (oneway void)activationRequestFromContinuityWithContext:(id)a0;
- (oneway void)activationRequestFromTestingWithContext:(id)a0;
- (oneway void)activationRequestFromBreadcrumb;
- (void)_registerSourceForIdentifier:(id)a0;
- (oneway void)activationRequestFromButtonIdentifier:(id)a0 context:(id)a1;
- (void)_activationRequestFromDirectActionEvent:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (oneway void)prewarmFromButtonIdentifier:(id)a0;
- (oneway void)activationRequestFromDirectActionEvent:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)_unregisterSourceForIdentifier:(id)a0;
- (oneway void)prewarmFromButtonIdentifier:(id)a0 longPressInterval:(id)a1;
- (oneway void)registerNonButtonSourceWithType:(id)a0 withUUID:(id)a1;
- (oneway void)buttonUpFromButtonIdentifier:(id)a0 deviceIdentifier:(id)a1 timestamp:(id)a2;
- (oneway void)unregisterNonButtonSourceWithType:(id)a0 withUUID:(id)a1;
- (oneway void)buttonDownFromButtonIdentifier:(id)a0 timestamp:(id)a1;
- (oneway void)unregisterButtonIdentifier:(id)a0 withUUID:(id)a1;
- (oneway void)deactivationRequestFromButtonIdentifier:(id)a0 context:(id)a1 options:(id)a2;
- (oneway void)buttonLongPressFromButtonIdentifier:(id)a0 context:(id)a1;

@end
