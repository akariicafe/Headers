@class NSArray, NSNumber;

@interface LighthouseShareSheetPFLTraining : NSObject

@property (retain, nonatomic) NSArray *inputVectors;
@property (retain, nonatomic) NSArray *targetVector;
@property (retain, nonatomic) NSNumber *positiveSampleWeight;

+ (void)initialize;
+ (id)processDataForStore:(id)a0 taskParameters:(id)a1;
+ (id)taskResultFromDict:(id)a0;

- (void).cxx_destruct;
- (id)createDataSourceForRecipe:(id)a0 error:(id *)a1;
- (id)runTask:(id)a0 knowledgeStore:(id)a1 error:(id *)a2;

@end
