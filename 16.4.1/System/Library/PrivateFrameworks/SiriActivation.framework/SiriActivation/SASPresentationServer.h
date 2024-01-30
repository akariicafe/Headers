@class NSMutableArray, BSServiceConnectionEndpointInjector, BSServiceConnection;
@protocol BSServiceConnectionHost, SASPresentationServerDelegate;

@interface SASPresentationServer : NSObject

@property (retain, nonatomic) BSServiceConnectionEndpointInjector *workspaceServiceInjector;
@property (retain, nonatomic) BSServiceConnection<BSServiceConnectionHost> *connection;
@property (nonatomic) BOOL invalidated;
@property (retain, nonatomic) NSMutableArray *waitForConnectBlocks;
@property (weak, nonatomic) id<SASPresentationServerDelegate> weak_delegate;
@property (nonatomic) long long presentationIdentifier;

+ (id)interface;
+ (id)serviceQuality;
+ (void)_unregisterConnection:(id)a0;
+ (id)serverForConnection:(id)a0;

- (oneway void)didUpdatePresentationState:(id)a0;
- (id)bulletinForIdentifier:(id)a0;
- (oneway void)registerPresentationIdentifier:(id)a0;
- (oneway void)didDismiss;
- (id)bulletinsOnLockScreen;
- (oneway void)speechRequestStartedFromSiriOrb;
- (void)dealloc;
- (oneway void)pong;
- (oneway void)willDismiss;
- (oneway void)unregisterPresentationIdentifier:(id)a0;
- (oneway void)failedToPresentSiriWithError:(id)a0;
- (id)init;
- (id)allBulletins;
- (oneway void)didPresentSiri;
- (id)description;
- (oneway void)speechRequestCancelledFromSiriOrb;
- (oneway void)resetSiriToActive;
- (void).cxx_destruct;
- (void)_setConnection:(id)a0;

@end
