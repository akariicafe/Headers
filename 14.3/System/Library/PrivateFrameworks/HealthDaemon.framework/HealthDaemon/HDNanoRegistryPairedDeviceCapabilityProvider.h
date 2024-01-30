@protocol HDPairedDeviceCapabilityProvidingDelegate;

@interface HDNanoRegistryPairedDeviceCapabilityProvider : NSObject <HDPairedDeviceCapabilityProviding>

@property (weak, nonatomic) id<HDPairedDeviceCapabilityProvidingDelegate> delegate;

- (id)deviceForPairingID:(id)a0;
- (id)isCapabilitySupported:(id)a0 onDevice:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)_pairedOrActiveDevicesDidChange:(id)a0;
- (id)activePairedDevice;
- (id)isCapabilitySupportedOnActivePairedDevice:(id)a0 error:(id *)a1;
- (void)startListeningForUpdates;

@end
