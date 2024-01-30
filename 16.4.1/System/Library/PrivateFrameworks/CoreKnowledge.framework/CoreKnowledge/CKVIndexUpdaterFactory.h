@class CKVIndexManager, CKVSettings;

@interface CKVIndexUpdaterFactory : NSObject {
    CKVIndexManager *_indexManager;
    CKVSettings *_settings;
    double _timeout;
}

- (id)initWithIndexManager:(id)a0 settings:(id)a1 timeout:(double)a2;
- (id)updaterForRequest:(id)a0;
- (void).cxx_destruct;

@end
