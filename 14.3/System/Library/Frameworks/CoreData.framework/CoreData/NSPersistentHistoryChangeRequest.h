@class NSArray, NSPersistentHistoryToken, NSFetchRequest, NSNumber;

@interface NSPersistentHistoryChangeRequest : NSPersistentStoreRequest {
    NSArray *_transactionIDs;
    NSNumber *_transactionNumber;
    struct __persistentHistoryChangeRequestDescriptionFlags { unsigned char _useQueryGenerationToken : 1; unsigned char _deleteHistoryRequest : 1; unsigned char _fetchTransactionForToken : 1; unsigned char _percentageDeleteHistoryRequest : 1; unsigned int _reservedPersistentHistoryChangeRequestDescription : 28; } _persistentHistoryChangeRequestDescriptionFlags;
    id *_additionalPrivateIvars;
    unsigned long long _percentageOfDB;
}

@property long long resultType;
@property (readonly) NSPersistentHistoryToken *token;
@property (retain, nonatomic) NSFetchRequest *fetchRequest;

+ (id)fetchHistoryAfterTransaction:(id)a0;
+ (id)fetchHistoryAfterToken:(id)a0;
+ (id)deleteHistoryBeforeDate:(id)a0;
+ (id)decodeFromXPCArchive:(id)a0 withContext:(id)a1;
+ (id)deleteHistoryBeforeToken:(id)a0 whenHistoryPercentageOfStoreIsGreaterThan:(unsigned long long)a1;
+ (id)fetchHistoryTransactionForToken:(id)a0;
+ (id)fetchHistoryWithFetchRequest:(id)a0;
+ (id)deleteHistoryBeforeDate:(id)a0 whenHistoryPercentageOfStoreIsGreaterThan:(unsigned long long)a1;
+ (id)deleteHistoryBeforeToken:(id)a0;
+ (id)fetchHistoryAfterDate:(id)a0;
+ (id)deleteHistoryBeforeTransaction:(id)a0;

- (unsigned long long)fetchLimit;
- (BOOL)returnsDistinctResults;
- (unsigned long long)fetchOffset;
- (id)initWithFetchRequest:(id)a0;
- (unsigned long long)fetchBatchSize;
- (unsigned long long)percentageOfDB;
- (id)initWithDate:(id)a0 delete:(BOOL)a1;
- (unsigned long long)requestType;
- (id)encodeForXPC;
- (BOOL)includesSubentities;
- (id)predicateForStoreIdentifier:(id)a0;
- (id)transactionNumber;
- (id)init;
- (id)initWithDate:(id)a0;
- (id)predicate;
- (id)initWithToken:(id)a0 delete:(BOOL)a1;
- (id)initWithTransactionID:(id)a0 delete:(BOOL)a1 transactionOnly:(BOOL)a2;
- (id)initWithToken:(id)a0;
- (id)initWithTransactionIDs:(id)a0;
- (void)dealloc;
- (void)setFetchLimit:(unsigned long long)a0;
- (id)sortDescriptors;
- (BOOL)isPercentageDelete;
- (id)date;
- (id)propertiesToFetchForEntity:(id)a0 includeTransactionStrings:(BOOL)a1;
- (id)propertiesToFetch;
- (id)description;
- (void)setFetchBatchSize:(unsigned long long)a0;
- (id)initWithDate:(id)a0 delete:(BOOL)a1 percentageOfDB:(unsigned long long)a2;
- (id)propertiesToFetchForEntity:(id)a0;
- (id)propertiesToGroupBy;
- (void)setFetchOffset:(unsigned long long)a0;
- (id)initWithToken:(id)a0 delete:(BOOL)a1 percentageOfDB:(unsigned long long)a2;
- (id)initWithTransactionID:(id)a0 delete:(BOOL)a1 transactionOnly:(BOOL)a2 percentageOfDB:(unsigned long long)a3;
- (id)debugDescription;
- (BOOL)useQueryGenerationToken;
- (BOOL)includesPropertyValues;
- (id)entityNameToFetch;
- (id)initWithTransactionToken:(id)a0;
- (BOOL)isFetchTransactionForToken;
- (void)setUseQueryGenerationToken:(BOOL)a0;
- (BOOL)isDelete;

@end
