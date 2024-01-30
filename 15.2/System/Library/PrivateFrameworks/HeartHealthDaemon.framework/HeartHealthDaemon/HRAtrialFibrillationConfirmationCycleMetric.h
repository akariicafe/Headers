@class NSDictionary, NSMutableDictionary;

@interface HRAtrialFibrillationConfirmationCycleMetric : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventPayload;
@property (readonly, copy, nonatomic) NSDictionary *payload;

- (void).cxx_destruct;
- (id)initWithAgeBin:(unsigned long long)a0 numberOfPositiveTachograms:(long long)a1 numberOfNegativeTachograms:(long long)a2 biologicalSex:(long long)a3 userShouldBeAlerted:(BOOL)a4 cycleDuration:(double)a5 additionalMetrics:(id)a6;

@end
