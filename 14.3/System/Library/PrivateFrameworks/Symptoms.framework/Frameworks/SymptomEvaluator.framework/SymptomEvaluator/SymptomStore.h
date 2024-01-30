@class NSString, NSMutableArray;

@interface SymptomStore : NSObject {
    unsigned int symptomMinRetainTime;
    unsigned int symptomMinSavedCount;
    double *symptomArrivalTimes;
    unsigned int symptomArrivalTimeNextIdx;
}

@property (nonatomic) unsigned int symptomIdent;
@property (retain, nonatomic) NSString *symptomKey;
@property (retain, nonatomic) NSString *symptomName;
@property (retain, nonatomic) NSString *symptomDescription;
@property (retain, nonatomic) NSMutableArray *symptomHistory;

+ (void)initialize;
+ (id)storeFromSymptomName:(id)a0;
+ (int)configure:(id)a0;
+ (id)idFromSymptomName:(id)a0;
+ (int)addFromReporter:(id)a0;
+ (void)_createForName:(id)a0 key:(id)a1 id:(unsigned int)a2 symptomDescription:(id)a3;
+ (id)storeFromSymptomKey:(id)a0;
+ (id)keyFromSymptomName:(id)a0;
+ (id)nameFromReporterId:(unsigned int)a0;
+ (id)nameFromSymptomId:(unsigned int)a0;
+ (id)description;
+ (void)noteReceivedSymptom:(id)a0;
+ (void)resetSymptomsWithKey:(id)a0;
+ (id)keyFromSymptomId:(unsigned int)a0;
+ (void)setRetainTime:(unsigned int)a0 forSymptom:(id)a1;
+ (id)descriptionFromSymptomName:(id)a0;
+ (id)storedSymptomsWithKey:(id)a0;
+ (id)nameFromSymptomKey:(id)a0;
+ (void)setRetainCount:(unsigned int)a0 forSymptom:(id)a1;
+ (unsigned int)numSymptomsWithKey:(id)a0 retainTime:(unsigned int)a1;
+ (id)idFromReporterName:(id)a0;
+ (void)pruneSymptomsWithKey:(id)a0;

- (void).cxx_destruct;
- (void)_pruneSymptomsForDate:(id)a0;
- (unsigned int)numSymptomsWithRetainTime:(unsigned int)a0;
- (void)setRetainTime:(unsigned int)a0;
- (id)description;
- (void)noteReceivedSymptom:(id)a0;
- (void)setRetainCount:(unsigned int)a0;

@end
