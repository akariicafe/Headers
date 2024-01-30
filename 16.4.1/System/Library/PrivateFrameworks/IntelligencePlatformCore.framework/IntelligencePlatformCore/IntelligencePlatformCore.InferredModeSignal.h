@class NSSet;

@interface IntelligencePlatformCore.InferredModeSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ inferredModeEvent;
    void /* unknown type, empty encoding */ inferredModeConfidenceThreshold;
    void /* unknown type, empty encoding */ inferredModeStream;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
