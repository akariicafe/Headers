@class NSString, NSNumber, NSData;

@interface PDSCDKV : NSManagedObject

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *stringValue;
@property (copy, nonatomic) NSNumber *numValue;
@property (retain, nonatomic) NSData *dataValue;

+ (id)fetchRequest;
+ (id)insertIntoManagedObjectContext:(id)a0;
+ (id)predicateForKey:(id)a0;

@end
