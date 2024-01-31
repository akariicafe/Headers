@class NSString, NSArray, NSPredicate, NSEntityDescription;

@interface NSFetchRequest : NSPersistentStoreRequest <NSSecureCoding, NSCoding, NSCopying> {
    NSArray *_groupByProperties;
    NSPredicate *_havingPredicate;
    id *_additionalPrivateIvars;
    NSArray *_valuesToFetch;
    NSEntityDescription *_entity;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    unsigned long long _batchSize;
    unsigned long long _fetchLimit;
    unsigned long long _allocationSize;
    NSArray *_relationshipKeyPathsForPrefetching;
    struct _fetchRequestFlags { unsigned char distinctValuesOnly : 1; unsigned char includesSubentities : 1; unsigned char includesPropertyValues : 1; unsigned char resultType : 3; unsigned char returnsObjectsAsFaults : 1; unsigned char excludePendingChanges : 1; unsigned char isInUse : 1; unsigned char entityIsName : 1; unsigned char refreshesRefetched : 1; unsigned char propertiesValidated : 1; unsigned char expressionsValidated : 1; unsigned char disableCaching : 1; unsigned char allocationType : 3; unsigned char batchLRUEntries : 4; unsigned char asyncRequest : 1; unsigned char purgeable : 1; unsigned short _RESERVED : 9; } _flags;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL purgeableResult;
@property (retain, nonatomic) NSEntityDescription *entity;
@property (readonly, nonatomic) NSString *entityName;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSArray *sortDescriptors;
@property (nonatomic) unsigned long long fetchLimit;
@property (retain, nonatomic) NSArray *affectedStores;
@property (nonatomic) unsigned long long resultType;
@property (nonatomic) BOOL includesSubentities;
@property (nonatomic) BOOL includesPropertyValues;
@property (nonatomic) BOOL returnsObjectsAsFaults;
@property (copy, nonatomic) NSArray *relationshipKeyPathsForPrefetching;
@property (nonatomic) BOOL includesPendingChanges;
@property (nonatomic) BOOL returnsDistinctResults;
@property (copy, nonatomic) NSArray *propertiesToFetch;
@property (nonatomic) unsigned long long fetchOffset;
@property (nonatomic) unsigned long long fetchBatchSize;
@property (nonatomic) BOOL shouldRefreshRefetchedObjects;
@property (copy, nonatomic) NSArray *propertiesToGroupBy;
@property (retain, nonatomic) NSPredicate *havingPredicate;

+ (BOOL)accessInstanceVariablesDirectly;
+ (void)initialize;
+ (id)fetchRequestWithEntityName:(id)a0;
+ (id)decodeFromXPCArchive:(id)a0 withContext:(id)a1 andPolicy:(id)a2;
+ (id)_stringForFetchRequestResultType:(unsigned long long)a0;
+ (id)_newDenormalizedFetchProperties:(id)a0;

- (unsigned long long)allocationSize;
- (id)init;
- (unsigned long long)hash;
- (id)_asyncResultHandle;
- (void)dealloc;
- (id)initWithEntityName:(id)a0;
- (id)encodeForXPC;
- (unsigned long long)allocationType;
- (void)_setAsyncResultHandle:(id)a0;
- (void)setAllocationType:(unsigned long long)a0;
- (unsigned long long)_fetchBatchLRUEntriesLimit;
- (BOOL)_disablePersistentStoreResultCaching;
- (void)_resolveEntityWithContext:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isAsyncRequest;
- (void)setAllocationSize:(unsigned long long)a0;
- (void)_setFlagsFromXPCEncoding:(id)a0;
- (id)_copyForDirtyContext;
- (id)execute:(id *)a0;
- (unsigned long long)requestType;
- (void)_setFetchBatchLRUEntriesLimit:(unsigned long long)a0;
- (id)description;
- (unsigned long long)_encodedFetchRequestFlagsForFlags:(unsigned long long)a0;
- (void)_writeIntoData:(id)a0 propertiesDict:(id)a1 uniquedPropertyNames:(id)a2 uniquedStrings:(id)a3 uniquedData:(id)a4 uniquedMappings:(id)a5 entities:(id)a6;
- (void)_throwIfNotEditable;
- (void)_setDisablePersistentStoreResultCaching:(BOOL)a0;
- (void)_incrementInUseCounter;
- (BOOL)isEqual:(id)a0;
- (id)_XPCEncodedFlags;
- (BOOL)_isEditable;
- (id)initWithCoder:(id)a0;
- (BOOL)_isCachingFetchRequest;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
