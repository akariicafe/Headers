@class CKVIndexManager, CKVLocalization;

@interface CKVSkitRebuilder : NSObject {
    CKVIndexManager *_indexManager;
    CKVLocalization *_localization;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)rebuildWithAllVocabulary;
- (id)initWithIndexManager:(id)a0 localization:(id)a1;
- (BOOL)_rebuildSkitUsingLocale:(id)a0 assetPath:(id)a1 skitDidOpen:(BOOL *)a2;

@end
