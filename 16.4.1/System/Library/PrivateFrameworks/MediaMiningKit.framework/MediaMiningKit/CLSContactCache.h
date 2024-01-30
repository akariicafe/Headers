@class NSPredicate;

@interface CLSContactCache : CLSDBCache

@property (retain, nonatomic) NSPredicate *entryPredicateWithContactIdentifier;
@property (retain, nonatomic) NSPredicate *entryPredicateWithContactIdentifiers;
@property (retain, nonatomic) NSPredicate *entryPredicateWithUpdateTimestamp;

- (id)dataModelName;
- (id)init;
- (void).cxx_destruct;
- (id)lastHistoryToken;
- (BOOL)setLastHistoryToken:(id)a0;
- (void)enumerateCachedEntriesUsingBlock:(id /* block */)a0;
- (void)invalidateCacheItemsBeforeDateWithTimestamp:(double)a0;
- (unsigned long long)numberOfCachedContacts;
- (BOOL)_updateHasPicture:(BOOL)a0 forEntry:(id)a1;
- (id)cachedContactForContactIdentifier:(id)a0;
- (BOOL)insertContactWithNoProfilePicture:(id)a0;
- (BOOL)insertFaceprintAnalysisResult:(id)a0 forContactIdentifier:(id)a1;
- (void)invalidateCacheItemForContactIdentifier:(id)a0;
- (void)invalidateCacheItemsForContactIdentifiers:(id)a0;

@end
