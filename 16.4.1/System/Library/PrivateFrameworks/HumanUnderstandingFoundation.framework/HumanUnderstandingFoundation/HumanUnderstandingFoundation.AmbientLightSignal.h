@class NSSet;

@interface HumanUnderstandingFoundation.AmbientLightSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ ambientLightMonitor;
    void /* unknown type, empty encoding */ rawFeatureNames;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
