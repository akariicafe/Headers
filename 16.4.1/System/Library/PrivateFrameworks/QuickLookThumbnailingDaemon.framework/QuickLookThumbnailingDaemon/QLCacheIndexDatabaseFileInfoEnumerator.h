@class QLCacheVersionedFileIdentifier;

@interface QLCacheIndexDatabaseFileInfoEnumerator : QLCacheIndexDatabaseGenericEnumerator {
    BOOL _extraInfo;
    BOOL _ubiquitous;
    QLCacheVersionedFileIdentifier *_fileIdentifier;
}

- (void).cxx_destruct;
- (id)initWithSqliteDatabase:(id)a0 toEnumerateUbiquitousFiles:(BOOL)a1 extraInfo:(BOOL)a2;
- (BOOL)nextFileWithCacheId:(unsigned long long *)a0 versionedFileIdentifier:(id *)a1 thumbnailCount:(unsigned int *)a2 minSize:(float *)a3 maxSize:(float *)a4 totalDataLength:(unsigned long long *)a5;

@end
