@class NSString;

@interface AMDAppSegment : NSManagedObject

@property (nonatomic) long long adamId;
@property (copy, nonatomic) NSString *algoId;
@property (copy, nonatomic) NSString *segment;
@property (copy, nonatomic) NSString *treatmentId;

+ (id)getSegmentsInfoForTreatment:(id)a0 error:(id *)a1;
+ (id)fetchRequest;
+ (id)getSegmentsDictForAllTreatments:(id *)a0;
+ (id)refreshSegments:(id)a0 error:(id *)a1;
+ (void)saveSegments:(id)a0 withTreatmentId:(id)a1 andAlgoId:(id)a2 error:(id *)a3;
+ (id)deleteAllSegments:(id *)a0;
+ (id)refreshSegmentsForAllTreatmentsForUser:(id)a0 error:(id *)a1;
+ (id)getSegmentsForTreatmentId:(id)a0 error:(id *)a1;

@end
