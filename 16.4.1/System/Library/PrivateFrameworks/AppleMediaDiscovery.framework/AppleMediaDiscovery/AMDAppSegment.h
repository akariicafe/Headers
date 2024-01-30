@class NSString;

@interface AMDAppSegment : NSManagedObject

@property (nonatomic) long long adamId;
@property (copy, nonatomic) NSString *algoId;
@property (copy, nonatomic) NSString *segment;
@property (copy, nonatomic) NSString *treatmentId;

+ (id)assignSegmentsToApps:(id)a0 withFeatureDictionary:(id)a1 predicate:(id)a2;
+ (id)deleteAllSegments:(id *)a0;
+ (id)fetchRequest;
+ (id)computeSegmentsForApps:(id)a0 withRules:(id)a1 error:(id *)a2;
+ (id)assignSegmentsWithParameters:(id)a0 error:(id *)a1;
+ (id)getSegmentsDictForAllTreatments:(id *)a0;
+ (void)validatePredicate:(id)a0 withFeatureList:(id)a1 error:(id *)a2;
+ (id)getSegmentsInfoForTreatment:(id)a0 error:(id *)a1;
+ (void)saveSegments:(id)a0 withTreatmentId:(id)a1 andAlgoId:(id)a2 error:(id *)a3;
+ (id)refreshSegments:(id)a0 error:(id *)a1;
+ (id)refreshSegmentsForAllTreatmentsForUser:(id)a0 error:(id *)a1;
+ (id)getSegmentsForTreatmentId:(id)a0 error:(id *)a1;
+ (BOOL)evaluatePredicate:(id)a0 withOperands:(id)a1;

@end
