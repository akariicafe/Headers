@class NSSet, NSDictionary, COCapabilityLegacyShim, NSString;
@protocol COCapabilityAddOnDelegate;

@interface COCapabilityAddOn : COMeshAddOn <COCapabilityLegacyShimDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) COCapabilityLegacyShim *pairLegacyShim;
@property (copy, nonatomic) NSSet *availableCapabilities;
@property (copy, nonatomic) NSDictionary *gatheredCapabilities;
@property (weak, nonatomic) id<COCapabilityAddOnDelegate> delegate;
@property (copy, nonatomic) NSSet *supportedCapabilities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_withLock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)didChangeNodesForMeshController:(id)a0;
- (void)meshController:(id)a0 didTransitionToState:(unsigned long long)a1;
- (void)_enableForPairLegacySupport;
- (BOOL)_legacyShimOverridesAvailableCapabilities:(id)a0;
- (void)_notifyDelegateCapabilitiesChanged;
- (void)_setAvailableCapabilities_Unsafe:(id)a0;
- (void)didAddToMeshController:(id)a0;
- (void)handleCapabilitiesReadRequest:(id)a0 callback:(id /* block */)a1;
- (void)handleCapabilitiesUpdateCommand:(id)a0;
- (void)handleCapabilitiesUpdateNotification:(id)a0;
- (id)initWithSupportedCapabilities:(id)a0;
- (void)legacyShim:(id)a0 availableCapabilitiesChanged:(id)a1;
- (void)performCapabilitiesUpdate;
- (void)willRemoveFromMeshController:(id)a0;

@end
