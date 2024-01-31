@class NSArray, UIWindow, NSXPCConnection;
@protocol CPInstrumentClusterProviding, CPInstrumentClusterControllerDelegate;

@interface CPInstrumentClusterController : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) id<CPInstrumentClusterProviding> instrumentClusterProvider;
@property (weak, nonatomic) id<CPInstrumentClusterControllerDelegate> delegate;
@property (readonly, nonatomic) UIWindow *instrumentClusterWindow;
@property (readonly, nonatomic) unsigned long long speedLimitSetting;
@property (readonly, nonatomic) unsigned long long compassSetting;
@property (copy, nonatomic) NSArray *inactiveDescriptionVariants;
@property (copy, nonatomic) NSArray *attributedInactiveDescriptionVariants;

+ (id)_clusterProvidingInterface;

- (id)_init;
- (void)_invalidate;
- (void)_connectionInvalidated;
- (void).cxx_destruct;
- (void)_connectionInterrupted;
- (void)_connectToListenerEndpoint:(id)a0;
- (void)_sceneConnect:(id)a0;
- (void)setCompassSetting:(unsigned long long)a0;
- (void)setInstrumentClusterWindow:(id)a0;
- (void)setSpeedLimitSetting:(unsigned long long)a0;

@end
