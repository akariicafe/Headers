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

- (id)currentSession;
- (void)updateGeoSupported;
- (BOOL)_appWithDeclaration:(id)a0 supportsAnyIntents:(id)a1;
- (void)fetchApplicationBundleIdentifiersForCarIntents:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setWantsGeoSupported;
- (BOOL)_appWithDeclaration:(id)a0 supportsAllIntents:(id)a1;
- (BOOL)_checkIfDeclaration:(id)a0 supportsIntents:(id)a1 requireAllIntents:(BOOL)a2;
- (id)effectivePolicyForAppDeclaration:(id)a0 inVehicleWithCertificateSerial:(id)a1;
- (unsigned long long)_applicationCategoryForAppDeclaration:(id)a0 policy:(id)a1;
- (id)effectivePolicyForAppDeclaration:(id)a0;
- (id)_vehicleProtocolsForCertificateSerial:(id)a0;
- (BOOL)_vehicleProtocolsIntersectAppProtocols:(id)a0 certificateSerial:(id)a1;

@end
