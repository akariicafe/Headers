@class NSData, NSString;

@interface AMDHistory : NSManagedObject

@property (nonatomic) short day;
@property (nonatomic) short domain;
@property (retain, nonatomic) NSData *results;
@property (copy, nonatomic) NSString *useCaseId;
@property (copy, nonatomic) NSString *userId;

+ (id)fetchRequest;
+ (id)fetchPreTodayHistoryForUser:(id)a0 inDomain:(id)a1 forUseCase:(id)a2 error:(id *)a3;
+ (id)sha2256HashFor:(id)a0;
+ (id)fetchHistoryForUser:(id)a0 inDomain:(id)a1 forUseCase:(id)a2 error:(id *)a3;
+ (short)daysSince2000;
+ (BOOL)saveResultsToHistory:(id)a0 forUser:(id)a1 inDomain:(id)a2 forUseCase:(id)a3 error:(id *)a4;
+ (id)fetchAllHistory:(id *)a0;
+ (id)deleteAllHistory:(id *)a0;
+ (id)deleteHistoryOlderThan:(short)a0 inDomain:(id)a1 error:(id *)a2;

@end
