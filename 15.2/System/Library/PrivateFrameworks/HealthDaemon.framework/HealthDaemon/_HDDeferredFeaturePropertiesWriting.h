@class NRPairedDeviceRegistry;

@interface _HDDeferredFeaturePropertiesWriting : _HDFeaturePropertiesWriting {
    NRPairedDeviceRegistry *_pairedDeviceRegistry;
}

- (void).cxx_destruct;
- (id)initWithLocalDomain:(id)a0 pairedDeviceRegistry:(id)a1;
- (void)synchronize;

@end
