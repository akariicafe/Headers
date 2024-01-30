@class NSSet;

@interface SiriGlobalReranker.FeatureProvider : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ namedFeatures;
    void /* unknown type, empty encoding */ featureNames;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
