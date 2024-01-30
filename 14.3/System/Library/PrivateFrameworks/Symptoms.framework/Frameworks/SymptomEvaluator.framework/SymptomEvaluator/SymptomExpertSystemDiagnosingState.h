@class NSDictionary;

@interface SymptomExpertSystemDiagnosingState : SymptomExpertSystemState

@property (retain, nonatomic) NSDictionary *triggeringSymptom;

+ (id)createStateWithLabel:(id)a0 rank:(unsigned long long)a1 entryPreds:(id)a2;

- (void).cxx_destruct;
- (void)createAndPostAWDMetric;

@end
