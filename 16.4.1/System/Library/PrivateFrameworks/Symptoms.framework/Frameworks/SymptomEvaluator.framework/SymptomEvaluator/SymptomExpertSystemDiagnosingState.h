@class NSDictionary;

@interface SymptomExpertSystemDiagnosingState : SymptomExpertSystemState

@property (retain, nonatomic) NSDictionary *triggeringSymptom;

+ (id)createStateWithLabel:(id)a0 rank:(unsigned long long)a1 entryPreds:(id)a2;

- (void)createAndPostAWDMetric;
- (void).cxx_destruct;

@end
