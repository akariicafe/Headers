@class HDProfile, HDDatabaseValueCache;

@interface HDSourceOrderManager : NSObject {
    HDProfile *_profile;
    HDDatabaseValueCache *_sourceOrdersForTypeCache;
}

+ (id)_defaultOrderingWithSources:(id)a0;

- (id)initWithProfile:(id)a0;
- (BOOL)_updateOrderedSourceIDsForWrappedSource:(struct _HDWrappedSource { id x0; struct vector<long long, std::__1::allocator<long long> > { long long *x0; long long *x1; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *x0; } x2; } x1; double x2; BOOL x3; } *)a0 transactionCache:(id)a1 transaction:(id)a2 error:(id *)a3;
- (BOOL)resetCacheWithError:(id *)a0;
- (void).cxx_destruct;
- (id)_sourceOrderForCodableSourceOrder:(id)a0 transactionCache:(id)a1 transaction:(id)a2 error:(id *)a3;
- (BOOL)createSourceOrdersWithCodables:(id)a0 error:(id *)a1;
- (id)_sourceCacheItemForObjectType:(id)a0 error:(id *)a1;
- (id)_orderedSourceIDsForOrderedSources:(id)a0 sourcesByID:(id)a1 objectType:(id)a2 transactionCache:(id)a3 database:(id)a4 error:(id *)a5;
- (BOOL)_updateSourceOrder:(id)a0 type:(id)a1 error:(id *)a2;
- (id)orderedSourceIDsForObjectType:(id)a0 bundleIdentifierMapping:(id)a1 userOrdered:(BOOL *)a2 error:(id *)a3;
- (id)orderedSourcesForObjectType:(id)a0 error:(id *)a1;
- (id)_defaultSourceCacheItemWithTransactionCache:(id)a0 database:(id)a1 error:(id *)a2;
- (BOOL)updateOrderedSources:(id)a0 forObjectType:(id)a1 error:(id *)a2;
- (id)_fetchSourceCacheItemForObjectType:(id)a0 transactionCache:(id)a1 transaction:(id)a2 error:(id *)a3;
- (BOOL)_insertCodableObjectTypeSourceOrder:(id)a0 transactionCache:(id)a1 transaction:(id)a2 error:(id *)a3;
- (id)_mergedSourceOrderForExistingOrder:(id)a0 incomingOrder:(id)a1;
- (BOOL)_updateSourceOrder:(id)a0 type:(id)a1 transactionCache:(id)a2 transaction:(id)a3 error:(id *)a4;
- (void)resetCacheWithTransaction:(id)a0;
- (id)_sourceCacheItemForObjectType:(id)a0 transactionCache:(id)a1 transaction:(id)a2 error:(id *)a3;
- (BOOL)addOrderedSource:(id)a0 objectTypes:(id)a1 error:(id *)a2;
- (BOOL)_addOrderedSource:(id)a0 objectType:(id)a1 transactionCache:(id)a2 transaction:(id)a3 error:(id *)a4;

@end
