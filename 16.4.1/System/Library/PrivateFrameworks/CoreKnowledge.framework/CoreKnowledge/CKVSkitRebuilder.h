@class CKVIndexManager, CKVLocalization;

@interface CKVSkitRebuilder : NSObject {
    CKVIndexManager *_indexManager;
    CKVLocalization *_localization;
}

+ (unsigned short)rebuildSkit:(id)a0 database:(id)a1 log:(id)a2 description:(id)a3 locale:(long long)a4 assetPath:(id)a5;

- (id)init;
- (void).cxx_destruct;
- (BOOL)rebuildForUser:(id)a0;
- (id)initWithIndexManager:(id)a0 settings:(id)a1;

@end
