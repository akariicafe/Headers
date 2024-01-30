@class QLCacheIndexDatabaseFileInfoEnumerator;

@interface QLDiskCacheFileInfoEnumerator : QLDiskCacheEnumerator {
    BOOL _extraInfo;
    BOOL _ubiquitous;
    QLCacheIndexDatabaseFileInfoEnumerator *_indexEnumerator;
}

- (void).cxx_destruct;
- (id)initWithDiskCache:(id)a0 forUbiquitousFiles:(BOOL)a1 extraInfo:(BOOL)a2;
- (id)nextFileInfo;

@end
