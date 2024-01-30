@interface AMDColdstartOperation : NSObject

+ (id)computeUpdatedScoresV2:(id)a0 withModel:(id)a1 andMappingDictionary:(id)a2;
+ (id)ensureNewDirectoryForBinaryWithModelId:(id)a0 andVersion:(id)a1;
+ (id)saveColdStartBinaryforModel:(id)a0 atLocation:(id)a1 withVersion:(id)a2 error:(id *)a3;

@end
