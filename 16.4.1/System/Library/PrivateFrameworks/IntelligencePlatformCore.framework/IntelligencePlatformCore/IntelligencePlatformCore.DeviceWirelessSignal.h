@class NSSet;

@interface IntelligencePlatformCore.DeviceWirelessSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ biomeLibrary;
    void /* unknown type, empty encoding */ airplaneModeStream;
    void /* unknown type, empty encoding */ bluetoothStream;
    void /* unknown type, empty encoding */ wifiStream;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
