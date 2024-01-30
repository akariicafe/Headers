@class NSString, NSData, NSFileHandle, NSError;

@interface _HKZipArchiveExtractor : NSObject {
    NSString *_pathname;
    NSData *_archiveData;
    NSFileHandle *_fileHandle;
    struct archive { } *_archive;
    struct archive_entry { } *_entry;
    BOOL _dataRead;
    NSData *_data;
    NSError *_lastError;
    BOOL _hasCalculatedNumberOfEntries;
    unsigned long long _numberOfEntries;
}

- (void)_clearState;
- (id)lastError;
- (void)enumerateEntriesUsingBlock:(id /* block */)a0;
- (id)initWithURL:(id)a0;
- (unsigned long long)numberOfEntries;
- (id)getDataForCurrentEntryWithMaxSizeBytes:(unsigned long long)a0;
- (id)initWithFileHandle:(id)a0 pathname:(id)a1;
- (id)_getDataForCurrentEntryWithSize:(unsigned long long)a0;
- (id)_getDataForCurrentEntryWithBufferingWithMaxSizeBytes:(unsigned long long)a0;
- (BOOL)_enumerateLinesInCurrentEntryWithBlock:(id /* block */)a0;
- (id)initWithPathname:(id)a0;
- (id)getDataForCurrentEntry;
- (BOOL)enumerateLinesInCurrentEntryWithError:(id *)a0 block:(id /* block */)a1;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (void)_logError:(id)a0;

@end
