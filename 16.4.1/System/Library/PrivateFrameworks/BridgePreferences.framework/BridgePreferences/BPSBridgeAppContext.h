@class NSMutableDictionary, NSDictionary, PBBridgeCompanionController, NRDevice;

@interface BPSBridgeAppContext : NSObject

@property (retain, nonatomic) PBBridgeCompanionController *bridgeController;
@property (nonatomic) BOOL inWatchSetupFlow;
@property (nonatomic) BOOL syncTrapEnabled;
@property (retain, nonatomic) NSDictionary *installedWatchkitApps;
@property (retain, nonatomic) NSMutableDictionary *watchAppInstallStates;
@property (retain, nonatomic) NRDevice *activeDevice;

+ (id)shared;

- (void).cxx_destruct;
- (void)tellWatchToSetSiriEnabled:(BOOL)a0;
- (BOOL)isInWatchSetupFlow;
- (BOOL)isSyncTrapEnabled;

@end
