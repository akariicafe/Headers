@class NSSet;

@interface HumanUnderstandingFoundation.InferredModeSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ rawFeatureNames;
    void /* unknown type, empty encoding */ inferredModeConfidenceThreshold;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
