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

- (oneway void)handleMarkBulletinWithIdentifier:(id)a0 asRead:(id)a1;
- (id)bulletinsOnLockScreen;
- (void)_setConnection:(id)a0;
- (id)allBulletins;
- (oneway void)didPresentSiri;
- (id)init;
- (void).cxx_destruct;
- (oneway void)unregisterPresentationIdentifier:(id)a0;
- (void)dealloc;
- (oneway void)willDismiss;
- (oneway void)failedToPresentSiriWithError:(id)a0;
- (id)bulletinForIdentifier:(id)a0;
- (id)description;
- (oneway void)resetSiriToActive;
- (oneway void)speechRequestStartedFromSiriOrb;
- (oneway void)didDismiss;
- (oneway void)pong;
- (oneway void)speechRequestCancelledFromSiriOrb;
- (oneway void)registerPresentationIdentifier:(id)a0;

@end
