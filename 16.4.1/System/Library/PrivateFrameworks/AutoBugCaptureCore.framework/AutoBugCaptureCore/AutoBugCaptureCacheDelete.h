@class DiagnosticStorageManager, NSString, NSMutableArray;

@interface AutoBugCaptureCacheDelete : NSObject {
    NSString *logArchivePath;
    NSMutableArray *purgedFilePaths;
}

@property (retain, nonatomic) DiagnosticStorageManager *storageManager;

- (id)replyCacheDeleteDictionaryWithCDInfo:(id)a0 amount:(unsigned long long)a1;
- (void)initCacheDeletePurgeMonitor;
- (void)processPurgedFilesForCDEvents:(id)a0;
- (id)initWithStorageManager:(id)a0;
- (id)cacheDeletePeriodicWithInfo:(struct __CFDictionary { } *)a0;
- (void).cxx_destruct;
- (void)registerCallbacks:(const char *)a0;

@end
