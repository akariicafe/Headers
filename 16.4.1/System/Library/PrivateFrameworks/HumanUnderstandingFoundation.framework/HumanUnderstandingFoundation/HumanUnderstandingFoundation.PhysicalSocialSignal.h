@class NSSet;

@interface HumanUnderstandingFoundation.PhysicalSocialSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ physicalSocialEvent;
    void /* unknown type, empty encoding */ biomeRootLibrary;
    void /* unknown type, empty encoding */ rawFeatureNames;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
