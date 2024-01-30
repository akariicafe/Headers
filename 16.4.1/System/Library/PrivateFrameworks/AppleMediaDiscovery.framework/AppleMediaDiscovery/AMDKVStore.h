@class NSString, NSData;

@interface AMDKVStore : NSManagedObject

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) NSData *value;

+ (void)setValue:(id)a0 forKey:(id)a1 error:(id *)a2;
+ (id)fetchRequest;
+ (id)deleteWithPredicate:(id)a0 error:(id *)a1;
+ (id)fetchAllKeyValues:(id *)a0;
+ (id)fetchEntryForKey:(id)a0 error:(id *)a1;
+ (id)fetchValueForKey:(id)a0 error:(id *)a1;

@end
