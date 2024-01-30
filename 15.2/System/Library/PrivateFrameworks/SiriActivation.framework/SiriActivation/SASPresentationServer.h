@class NSMutableArray, BSServiceConnectionEndpointInjector, BSServiceConnection;
@protocol BSServiceConnectionHost, SASPresentationServerDelegate;

@interface SASPresentationServer : NSObject

@property (retain, nonatomic) BSServiceConnectionEndpointInjector *workspaceServiceInjector;
@property (retain, nonatomic) BSServiceConnection<BSServiceConnectionHost> *connection;
@property (nonatomic) BOOL invalidated;
@property (retain, nonatomic) NSMutableArray *waitForConnectBlocks;
@property (weak, nonatomic) id<SASPresentationServerDelegate> weak_delegate;
@property (nonatomic) long long presentationIdentifier;

+ (id)serviceQuality;
+ (id)interface;
+ (void)_unregisterConnection:(id)a0;
+ (id)serverForConnection:(id)a0;

- (id)allBulletins;
- (id)bulletinForIdentifier:(id)a0;
- (oneway void)failedToPresentSiriWithError:(id)a0;
- (id)description;
- (oneway void)speechRequestCancelledFromSiriOrb;
- (oneway void)registerPresentationIdentifier:(id)a0;
- (void).cxx_destruct;
- (oneway void)willDismiss;
- (oneway void)unregisterPresentationIdentifier:(id)a0;
- (oneway void)speechRequestStartedFromSiriOrb;
- (id)init;
- (oneway void)pong;
- (oneway void)didDismiss;
- (void)dealloc;
- (oneway void)resetSiriToActive;
- (id)bulletinsOnLockScreen;
- (oneway void)didPresentSiri;
- (void)_setConnection:(id)a0;

@end
