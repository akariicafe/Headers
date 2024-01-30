@interface AMDatabase : NSObject

+ (BOOL)openDatabase:(id *)a0;
+ (id)acousticParameters:(id)a0 forMaterialName:(id)a1 error:(id *)a2;
+ (id)acousticParameters:(id)a0 forSemanticLabels:(id)a1 error:(id *)a2;
+ (id)labelsForSemanticTypeSQL:(id)a0 error:(id *)a1;
+ (id)acousticParametersFromCache:(id)a0 forMaterialName:(id)a1 error:(id *)a2;
+ (id)acousticParametersFromCache:(id)a0 forSemanticLabels:(id)a1 error:(id *)a2;
+ (id)acousticParametersSQL:(id)a0 forMaterialName:(id)a1 error:(id *)a2;
+ (id)acousticParametersSQL:(id)a0 forSemanticLabels:(id)a1 error:(id *)a2;
+ (BOOL)checkDatabaseReadAccess:(id *)a0;
+ (BOOL)closeDatabase:(id *)a0;
+ (id)labelsForSemanticType:(id)a0 error:(id *)a1;
+ (id)labelsForSemanticTypeFromCache:(id)a0 error:(id *)a1;
+ (id)materialNamesForAcousticParameterType:(id)a0 error:(id *)a1;
+ (id)materialNamesForAcousticParameterTypeFromCache:(id)a0 error:(id *)a1;
+ (id)materialNamesForAcousticParameterTypeSQL:(id)a0 error:(id *)a1;

@end
