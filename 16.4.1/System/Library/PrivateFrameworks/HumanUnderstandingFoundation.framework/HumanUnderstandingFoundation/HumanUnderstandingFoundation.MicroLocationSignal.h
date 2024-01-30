@class NSSet;

@interface HumanUnderstandingFoundation.MicroLocationSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ rawFeatureNames;
    void /* unknown type, empty encoding */ oneMinuteInSeconds;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
