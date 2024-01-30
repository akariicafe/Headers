@class NSSet;

@interface IntelligencePlatformCore.CalendarEventsSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ dateFetcher;
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ oneMinuteInSeconds;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
