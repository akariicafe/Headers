@class DiagnosticStorageManager, NSString;

@interface AutoBugCaptureCacheDelete : NSObject {
    NSString *logArchivePath;
}

@property (retain, nonatomic) DiagnosticStorageManager *storageManager;

- (void).cxx_destruct;
- (id)initWithStorageManager:(id)a0;
- (void)registerCallbacks:(const char *)a0;
- (unsigned long long)allowableDiskUsageSizeForUrgency:(int)a0;
- (id)replyCacheDeleteDictionaryWithCDInfo:(id)a0 amount:(unsigned long long)a1;
- (id)cacheDeletePurgeableWithUrgency:(int)a0 info:(struct __CFDictionary { } *)a1;
- (id)cacheDeletePurgeWithUrgency:(int)a0 info:(struct __CFDictionary { } *)a1;
- (id)cacheDeletePeriodicWithInfo:(struct __CFDictionary { } *)a0;

@end
