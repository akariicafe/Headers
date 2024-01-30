@class NSSet;

@interface SiriPrivateLearningAnalytics.FeatureProvider : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ namedFeatures;
    void /* unknown type, empty encoding */ targetName;
    void /* unknown type, empty encoding */ featureNames;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
