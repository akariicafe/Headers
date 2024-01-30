@class NSSet, NSMapTable, NSXPCConnection, NSNumber;

@interface SRAuthorizationClient : NSObject <SRSensorKitServiceClientAuthorizationListening> {
    int _registrationToken;
    NSXPCConnection *_connection;
    NSMapTable *_listeners;
    NSSet *_actualAuthorizedServices;
    NSSet *_deniedServices;
    NSNumber *_prerequisites;
}

@property (nonatomic) BOOL dataCollectionEnabled;
@property (nonatomic) BOOL firstRunOnboardingCompleted;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)authorizedServicesDidChange:(id)a0 deniedServices:(id)a1 prerequisites:(long long)a2 bundleIdentifier:(id)a3;
- (void)reregisterAfterInterruption:(id)a0 effectiveBundleId:(id)a1;

@end
