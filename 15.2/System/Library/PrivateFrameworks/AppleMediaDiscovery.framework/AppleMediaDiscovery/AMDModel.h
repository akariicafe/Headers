@class NSString;

@interface AMDModel : NSManagedObject

@property (copy, nonatomic) NSString *compiledModelDir;
@property (nonatomic) long long creationTimeSeconds;
@property (copy, nonatomic) NSString *modelId;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *version;

+ (id)fetchRequest;
+ (id)fetchAll:(id *)a0;
+ (id)getModelInfo:(id)a0 error:(id *)a1;
+ (id)deleteAllModelUrls:(id *)a0;
+ (id)deleteWithPredicate:(id)a0 error:(id *)a1;
+ (id)getCurrentModelInfoByModelId;
+ (void)saveModels:(id)a0 error:(id *)a1;
+ (void)deleteModels:(id)a0 error:(id *)a1;

@end
