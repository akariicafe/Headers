@class HDProfile, HDDatabaseValueCache;

@interface HDSourceOrderManager : NSObject {
    HDProfile *_profile;
    HDDatabaseValueCache *_sourceOrdersForTypeCache;
}

- (id)initWithProfile:(id)a0;
- (void)resetCacheWithTransaction:(id)a0;
- (BOOL)updateOrderedSources:(id)a0 forObjectType:(id)a1 error:(id *)a2;
- (BOOL)createSourceOrdersWithCodables:(id)a0 error:(id *)a1;
- (id)orderedSourceIDsForObjectType:(id)a0 error:(id *)a1;
- (BOOL)addOrderedSource:(id)a0 objectTypes:(id)a1 error:(id *)a2;
- (id)orderedSourceIDsWithUnorderedIDs:(id)a0 objectType:(id)a1 error:(id *)a2;
- (id)orderedSourcesForObjectType:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)resetCacheWithError:(id *)a0;

@end
