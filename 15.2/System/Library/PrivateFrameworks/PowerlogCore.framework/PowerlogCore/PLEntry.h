@class NSString, NSMutableDictionary, NSArray, NSDictionary, NSDate, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface PLEntry : NSObject <NSCopying>

@property (retain) NSMutableDictionary *dictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem;
@property (readonly) NSMutableArray *keys;
@property (readonly, getter=allValues) NSMutableArray *values;
@property (readonly) BOOL hasDynamicKeys;
@property (readonly) BOOL hasArrayKeys;
@property (readonly) NSArray *definedKeys;
@property (readonly) NSArray *dynamicKeys;
@property (readonly) NSArray *arrayKeys;
@property BOOL existsInDB;
@property BOOL isErrorEntry;
@property BOOL writeToDB;
@property (retain, nonatomic) NSDictionary *entryDefinition;
@property (retain, nonatomic) NSDate *entryDate;
@property (retain, nonatomic) NSString *entryKey;
@property (readonly) id subEntryKey;
@property (nonatomic) long long entryID;

+ (id)entryKey;
+ (void)load;
+ (id)entryWithEntryKey:(id)a0 withData:(id)a1;
+ (void)registerEntry:(Class)a0;
+ (Class)classForEntryKey:(id)a0;
+ (id)summarizeAggregateEntries:(id)a0 withPrimaryKeys:(id)a1;
+ (id)entryWithEntryKey:(id)a0 withRawData:(id)a1;
+ (id)summarizeAggregateEntries:(id)a0;

- (long long)compare:(id)a0;
- (id)serialized;
- (long long)compare:(id)a0 options:(short)a1;
- (id)definitionForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initEntryWithRawData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializedForJSON;
- (id)debugDescription;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithEntryKey:(id)a0 withRawData:(id)a1;
- (id)initWithEntryKey:(id)a0 withDate:(id)a1;
- (id)initWithEntryKey:(id)a0 withData:(id)a1;
- (void)setObjectsFromRawData:(id)a0;
- (id)initWithEntryKey:(id)a0;
- (short)formaterForKey:(id)a0;
- (int)staticArraySizeForKey:(id)a0;
- (id)initEntryWithData:(id)a0;
- (id)initWithEntryDate:(id)a0;
- (void)checkOverridesEntryDateWithNowDate:(id)a0;
- (void)setObjectsFromData:(id)a0;
- (void)setObjectsUsingMetricsFromData:(id)a0;
- (id)unitForKey:(id)a0;
- (id)descriptionRespectingAllowlist:(BOOL)a0;
- (BOOL)hasAppIdentifierKeys;
- (void)setDynamicObjectsFromRawData:(id)a0;
- (void)loadDynamicKeys;
- (BOOL)isKeyDynamic:(id)a0;
- (BOOL)isKeyAggregateValue:(id)a0;
- (id)keyValuePathForKey:(id)a0;
- (BOOL)filterEntryLogging;

@end
