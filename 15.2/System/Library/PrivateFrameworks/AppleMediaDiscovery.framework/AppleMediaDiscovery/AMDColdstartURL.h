@class NSString;

@interface AMDColdstartURL : NSManagedObject

@property (copy, nonatomic) NSString *modelId;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *version;

+ (id)fetchRequest;
+ (id)fetchAll:(id *)a0;
+ (id)deleteAllColdstartUrls:(id *)a0;
+ (id)deleteWithPredicate:(id)a0 error:(id *)a1;
+ (id)getColdstartURLForModel:(id)a0 error:(id *)a1;
+ (id)getCurrentURLInfoByModelId;
+ (void)deleteColdstartURLs:(id)a0 error:(id *)a1;
+ (void)saveColdstartURL:(id)a0 error:(id *)a1;

@end
