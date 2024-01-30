@class NSSet;

@interface HumanUnderstandingFoundation.SoundAnalysisSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ rawFeatureNames;
    void /* unknown type, empty encoding */ lookBackWindowInSecs;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
