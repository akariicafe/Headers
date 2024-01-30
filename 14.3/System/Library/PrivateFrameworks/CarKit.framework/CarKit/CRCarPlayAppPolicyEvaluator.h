@class NSObject, CARSessionStatus, CRCarPlayAppBlacklist;
@protocol OS_dispatch_queue;

@interface CRCarPlayAppPolicyEvaluator : NSObject {
    CARSessionStatus *_sessionStatus;
}

@property (retain, nonatomic) CRCarPlayAppBlacklist *blacklist;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *geoQueue;
@property (nonatomic) BOOL geo_queue_geoSupported;
@property (nonatomic) BOOL evaluatorWantsGeoManagement;
@property (nonatomic, getter=isGeoSupported) BOOL geoSupported;

+ (id)_carIntentIdentifiers;
+ (id)allIntentIdentifiers;

- (void)fetchApplicationBundleIdentifiersForCarIntents:(id /* block */)a0;
- (id)effectivePolicyForAppDeclaration:(id)a0 inVehicleWithCertificateSerial:(id)a1;
- (void)updateGeoSupported;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_applicationCategoryForAppDeclaration:(id)a0 policy:(id)a1;
- (void)setWantsGeoSupported;
- (id)_vehicleProtocolsForCertificateSerial:(id)a0;
- (BOOL)_appWithDeclaration:(id)a0 supportsAllIntents:(id)a1;
- (BOOL)_appWithDeclaration:(id)a0 supportsAnyIntents:(id)a1;
- (BOOL)_vehicleProtocolsIntersectAppProtocols:(id)a0 certificateSerial:(id)a1;
- (BOOL)_checkIfDeclaration:(id)a0 supportsIntents:(id)a1 requireAllIntents:(BOOL)a2;
- (id)effectivePolicyForAppDeclaration:(id)a0;
- (id)currentSession;

@end
