@class CKVIndexManager, CKVIndexUpdaterFactory, CKVSettings;

@interface CKVIndexUpdater : NSObject {
    CKVIndexManager *_idxMgr;
    CKVIndexUpdaterFactory *_updaterFactory;
    CKVSettings *_settings;
}

- (void).cxx_destruct;
- (id)initWithIndexManager:(id)a0 settings:(id)a1;
- (id)initWithIndexManager:(id)a0 indexUpdaterFactory:(id)a1 settings:(id)a2;
- (BOOL)applyStreamDonationOfType:(long long)a0 originApp:(id)a1 streamManager:(id)a2;
- (BOOL)applyFullSetVocabularyDonation:(id)a0;
- (BOOL)_updateIndexesWithFullSetOfItems:(id)a0 ofType:(long long)a1 originApp:(id)a2;
- (BOOL)_updateIndexesWithStream:(id)a0 ofType:(long long)a1 originApp:(id)a2;
- (unsigned long long)_diffUpdateItems:(id)a0 itemType:(long long)a1 itemUpdater:(id)a2 ftsUpdater:(id)a3 skitUpdater:(id)a4 options:(unsigned long long)a5;
- (unsigned long long)_deleteStaleItems:(id)a0 ftsUpdater:(id)a1 skitUpdater:(id)a2 options:(unsigned long long)a3;
- (unsigned long long)_deleteAllItems:(id)a0 emptyDonation:(BOOL)a1 ftsUpdater:(id)a2 skitUpdater:(id)a3 options:(unsigned long long)a4;
- (unsigned long long)_insertAllItems:(id)a0 itemType:(long long)a1 itemUpdater:(id)a2 ftsUpdater:(id)a3 skitUpdater:(id)a4 options:(unsigned long long)a5;
- (BOOL)rebuildSkitWithAllVocabulary;
- (void)_logSkitUpdate:(unsigned long long)a0 skitUpdater:(id)a1 typeDescription:(id)a2 origin:(id)a3;

@end
