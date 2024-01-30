@class NSDictionary;

@interface VSWordTimingService : NSObject

@property (retain, nonatomic) NSDictionary *wordTimings;

- (void).cxx_destruct;
- (id)timingPlistForLanguage:(id)a0;
- (id)timingInfosFrom:(id)a0 withText:(id)a1;
- (id)estimatedTTSWordTimingForText:(id)a0 withLanguage:(id)a1 withGender:(long long)a2;

@end
