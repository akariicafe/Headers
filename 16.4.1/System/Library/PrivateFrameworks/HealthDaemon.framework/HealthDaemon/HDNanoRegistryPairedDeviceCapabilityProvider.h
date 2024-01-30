@protocol HDPairedDeviceCapabilityProvidingDelegate;

@interface HDNanoRegistryPairedDeviceCapabilityProvider : NSObject <HDPairedDeviceCapabilityProviding> {
    int _pairedDeviceDidChangeCapabilitiesNotificationToken;
}

@property (weak, nonatomic) id<HDPairedDeviceCapabilityProvidingDelegate> delegate;

- (BOOL)isCapabilitySupported:(id)a0 onDevice:(id)a1;
- (void)_pairedOrActiveDevicesDidChange:(id)a0;
- (void)dealloc;
- (id)isCapabilitySupportedOnActivePairedDevice:(id)a0 error:(id *)a1;
- (id)init;
- (void)startListeningForUpdates;
- (id)activePairedDevice;
- (void).cxx_destruct;

@end
