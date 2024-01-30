@class NSSet;

@interface IntelligencePlatformCore.DeviceDisplaySignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ biomeLibrary;
    void /* unknown type, empty encoding */ deviceBacklightStream;
    void /* unknown type, empty encoding */ deviceScreenLockStream;
    void /* unknown type, empty encoding */ firstBacklightAfterWakeupEvents;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
