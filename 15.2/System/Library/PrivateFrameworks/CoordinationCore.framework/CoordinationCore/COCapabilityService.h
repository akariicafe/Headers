@class NSDictionary, NSSet, NSString;

@interface COCapabilityService : COService <COCapabilityAddOnDelegate, COCapabilityManagerServiceInterface>

@property (copy, nonatomic) NSDictionary *capabilities;
@property (copy, nonatomic) NSDictionary *observers;
@property (copy, nonatomic) NSSet *supportedCapabilities;
@property (copy, nonatomic) NSDictionary *availableCapabilities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceWithDelegate:(id)a0;

- (void)addOn:(id)a0 availableCapabilitiesChanged:(id)a1;
- (void)unregisterCapability:(id)a0;
- (BOOL)_isCapabilityAvailable:(id)a0 inCluster:(id)a1;
- (void)_diffCapabilities:(id)a0 withCapabilities:(id)a1 result:(id /* block */)a2;
- (void)addObserverForCapability:(id)a0 inCluster:(id)a1;
- (void)_updateSupportedCapabilities;
- (void)_notifyClient:(id)a0 availability:(BOOL)a1 ofCapability:(id)a2 inCluster:(id)a3;
- (void)_addOnAdded:(id)a0;
- (id)_getEffectiveCapabilitiesForCluster:(id)a0;
- (void)_clientLost:(id)a0;
- (void)_cluster:(id)a0 availableCapabilitiesChanged:(id)a1;
- (void).cxx_destruct;
- (id)_remoteInterfaceForClient:(id)a0 withErrorHandler:(id /* block */)a1;
- (void)removeObserverForCapability:(id)a0 inCluster:(id)a1;
- (void)_effectiveCapabilitiesForCluster:(id)a0 changedFrom:(id)a1 to:(id)a2;
- (void)addMesh:(id)a0 forCluster:(id)a1 completion:(id /* block */)a2;
- (void)_notifyObserversAvailabilityChangedOfCapability:(id)a0 inCluster:(id)a1;
- (void)_addOnRemoved:(id)a0;
- (BOOL)_isCapabilitySupported:(id)a0;
- (void)_configureServiceInterfacesOnConnection:(id)a0;
- (void)registerCapability:(id)a0;
- (id)initWithListenerProvider:(id)a0 addOnProvider:(id)a1 delegate:(id)a2;

@end
