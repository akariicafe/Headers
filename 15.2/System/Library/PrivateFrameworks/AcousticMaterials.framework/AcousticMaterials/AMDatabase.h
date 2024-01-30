@interface AMDatabase : NSObject

+ (BOOL)openDatabase:(id *)a0;
+ (id)acousticParameters:(id)a0 forMaterialName:(id)a1 error:(id *)a2;
+ (id)acousticParameters:(id)a0 forSemanticLabels:(id)a1 error:(id *)a2;
+ (BOOL)validatedWithoutError:(id *)a0;
+ (BOOL)checkDatabaseReadAccess:(id *)a0;
+ (id)absorptionMaterialNames:(id *)a0;
+ (id)absorptionCoefficientsForName:(id)a0 error:(id *)a1;
+ (id)scatteringMaterialNames:(id *)a0;
+ (id)scatteringCoefficientsForName:(id)a0 error:(id *)a1;
+ (id)soundReductionIndexMaterialNames:(id *)a0;
+ (id)soundReductionIndexCoefficientsForName:(id)a0 error:(id *)a1;
+ (BOOL)closeDatabase:(id *)a0;
+ (id)materialNamesForAcousticParameterType:(id)a0 error:(id *)a1;
+ (id)labelsForSemanticType:(id)a0 error:(id *)a1;

@end
