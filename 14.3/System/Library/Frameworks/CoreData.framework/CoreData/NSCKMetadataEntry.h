@class NSString, NSDate, NSNumber, NSObject;
@protocol NSSecureCoding;

@interface NSCKMetadataEntry : NSManagedObject

@property (class, readonly, nonatomic) NSString *entityPath;

@property (retain, nonatomic) NSNumber *boolValueNum;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) BOOL boolValue;
@property (retain, nonatomic) NSObject<NSSecureCoding> *transformedValue;
@property (retain, nonatomic) NSNumber *integerValue;
@property (retain, nonatomic) NSDate *dateValue;

+ (id)updateOrInsertMetadataEntryWithKey:(id)a0 boolValue:(BOOL)a1 forStore:(id)a2 intoManagedObjectContext:(id)a3 error:(id *)a4;
+ (id)updateOrInsertMetadataEntryWithKey:(id)a0 transformedValue:(id)a1 forStore:(id)a2 intoManagedObjectContext:(id)a3 error:(id *)a4;
+ (id)insertMetadataEntryWithKey:(id)a0 transformedValue:(id)a1 forStore:(id)a2 intoManagedObjectContext:(id)a3;
+ (id)insertMetadataEntryWithKey:(id)a0 boolValue:(BOOL)a1 forStore:(id)a2 intoManagedObjectContext:(id)a3;
+ (id)insertMetadataEntryWithKey:(id)a0 stringValue:(id)a1 forStore:(id)a2 intoManagedObjectContext:(id)a3;
+ (id)updateOrInsertMetadataEntryWithKey:(id)a0 stringValue:(id)a1 forStore:(id)a2 intoManagedObjectContext:(id)a3 error:(id *)a4;
+ (id)updateOrInsertMetadataEntryWithKey:(id)a0 integerValue:(id)a1 forStore:(id)a2 intoManagedObjectContext:(id)a3 error:(id *)a4;
+ (id)entryForKey:(id)a0 fromStore:(id)a1 inManagedObjectContext:(id)a2 error:(id *)a3;
+ (id)entriesForKeys:(id)a0 onlyFetchingProperties:(id)a1 fromStore:(id)a2 inManagedObjectContext:(id)a3 error:(id *)a4;
+ (id)entriesForKeys:(id)a0 fromStore:(id)a1 inManagedObjectContext:(id)a2 error:(id *)a3;
+ (id)insertMetadataEntryWithKey:(id)a0 integerValue:(id)a1 forStore:(id)a2 intoManagedObjectContext:(id)a3;

- (id)describeValue;

@end
