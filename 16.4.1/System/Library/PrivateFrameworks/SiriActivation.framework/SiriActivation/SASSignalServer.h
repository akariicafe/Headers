@class BSServiceConnection, NSString, SASActivationInstrumentation, NSMutableArray, BSServiceConnectionEndpointInjector;
@protocol BSServiceConnectionHost, SASSignalServerDelegate;

@interface SASSignalServer : NSObject {
    SASActivationInstrumentation *_activationInstrumentation;
}

@property (retain, nonatomic) BSServiceConnectionEndpointInjector *workspaceServiceInjector;
@property (retain, nonatomic) BSServiceConnection<BSServiceConnectionHost> *connection;
@property (nonatomic) BOOL invalidated;
@property (retain, nonatomic) NSMutableArray *waitForConnectBlocks;
@property (weak, nonatomic) id<SASSignalServerDelegate> weak_delegate;
@property (nonatomic) NSString *assertionClientIdentifier;

+ (id)interface;
+ (id)serviceQuality;
+ (void)_unregisterConnection:(id)a0;
+ (id)serverForConnection:(id)a0;

- (oneway void)buttonLongPressFromButtonIdentifier:(id)a0 context:(id)a1;
- (oneway void)buttonTapFromButtonIdentifier:(id)a0 timestamp:(id)a1 context:(id)a2;
- (oneway void)unregisterButtonEventListenerWithIdentifier:(id)a0;
- (oneway void)activationRequestFromSimpleActivation:(id)a0;
- (void)_activationRequestFromDirectActionEventWithContext:(id)a0 completion:(id /* block */)a1;
- (oneway void)buttonUpFromButtonIdentifier:(id)a0 deviceIdentifier:(id)a1 timestamp:(id)a2 context:(id)a3;
- (oneway void)registerButtonEventListenerWithIdentifier:(id)a0;
- (oneway void)activationRequestFromDirectActionEventWithContext:(id)a0 completion:(id /* block */)a1;
- (oneway void)activationRequestFromBluetoothKeyboardActivation:(id)a0;
- (oneway void)activationRequestFromButtonIdentifier:(id)a0 context:(id)a1;
- (oneway void)activationRequestFromSpotlightWithContext:(id)a0;
- (oneway void)activationRequestFromDirectActionEventWithContext:(id)a0;
- (oneway void)buttonDownFromButtonIdentifier:(id)a0 timestamp:(id)a1 context:(id)a2;
- (void)_registerSourceForIdentifier:(id)a0;
- (void)_unregisterSourceForIdentifier:(id)a0;
- (oneway void)activationRequestFromRemotePresentationBringUpWithContext:(id)a0;
- (oneway void)prewarmFromButtonIdentifier:(id)a0 longPressInterval:(id)a1;
- (oneway void)prewarmFromButtonIdentifier:(id)a0;
- (oneway void)cancelPrewarmFromButtonIdentifier:(id)a0;
- (oneway void)registerAssertionWithIdentifier:(id)a0 reason:(id)a1;
- (id)init;
- (oneway void)activationRequestFromBreadcrumb;
- (oneway void)registerButtonIdentifier:(id)a0 withUUID:(id)a1;
- (oneway void)deactivationRequestFromButtonIdentifier:(id)a0 context:(id)a1 options:(id)a2;
- (oneway void)unregisterButtonIdentifier:(id)a0 withUUID:(id)a1;
- (oneway void)unregisterNonButtonSourceWithType:(id)a0 withUUID:(id)a1;
- (oneway void)registerNonButtonSourceWithType:(id)a0 withUUID:(id)a1;
- (void).cxx_destruct;
- (void)_setConnection:(id)a0;
- (oneway void)activationRequestFromContinuityWithContext:(id)a0;
- (oneway void)activationRequestFromTestingWithContext:(id)a0;
- (oneway void)unregisterAssertionWithIdentifier:(id)a0;

@end
