@class NSSet;

@interface HumanUnderstandingFoundation.AppLaunchSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ appLaunchEvent;
    void /* unknown type, empty encoding */ rawFeatureNames;
    void /* unknown type, empty encoding */ featureValues;
    void /* unknown type, empty encoding */ appLaunchFeatures;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
