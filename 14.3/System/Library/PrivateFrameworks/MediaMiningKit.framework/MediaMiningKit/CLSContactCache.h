@class NSPredicate;

@interface CLSContactCache : CLSDBCache

@property (retain, nonatomic) NSPredicate *entryPredicateWithContactIdentifier;
@property (retain, nonatomic) NSPredicate *entryPredicateWithContactIdentifiers;
@property (retain, nonatomic) NSPredicate *entryPredicateWithUpdateTimestamp;

- (BOOL)setLastHistoryToken:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)insertContactWithNoProfilePicture:(id)a0;
- (void)enumerateCachedEntriesUsingBlock:(id /* block */)a0;
- (void)invalidateCacheItemsBeforeDateWithTimestamp:(double)a0;
- (id)cachedContactForContactIdentifier:(id)a0;
- (void)invalidateCacheItemForContactIdentifier:(id)a0;
- (id)dataModelName;
- (unsigned long long)numberOfCachedContacts;
- (BOOL)insertFaceprintAnalysisResult:(id)a0 forContactIdentifier:(id)a1;
- (BOOL)_updateHasPicture:(BOOL)a0 forEntry:(id)a1;
- (id)lastHistoryToken;
- (void)invalidateCacheItemsForContactIdentifiers:(id)a0;

@end
