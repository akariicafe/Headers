@class NSSet;

@interface IntelligencePlatformCore.ActivityIntervalSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ dateFetcher;
    void /* unknown type, empty encoding */ motionStateActivityIntervalProvider;
    void /* unknown type, empty encoding */ oneMinuteInSeconds;
    void /* unknown type, empty encoding */ queue;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
