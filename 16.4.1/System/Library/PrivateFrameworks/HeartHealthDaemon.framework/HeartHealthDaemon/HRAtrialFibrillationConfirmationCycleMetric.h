@class NSDictionary, NSMutableDictionary;

@interface HRAtrialFibrillationConfirmationCycleMetric : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventPayload;
@property (readonly, copy, nonatomic) NSDictionary *payload;

- (void).cxx_destruct;
- (id)initWithAgeBin:(unsigned long long)a0 numberOfPositiveTachograms:(long long)a1 numberOfNegativeTachograms:(long long)a2 algorithmVersion:(long long)a3 biologicalSex:(long long)a4 userShouldBeAlerted:(BOOL)a5 cycleDuration:(double)a6 additionalMetrics:(id)a7;

@end
