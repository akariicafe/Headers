@class NSURL, NSMutableArray;

@interface CKDClonedFileCache : NSObject {
    NSURL *_cacheDirectory;
    unsigned long long _entryLimit;
    NSMutableArray *_entries;
}

- (void)prune;
- (id)cacheEntries;
- (unsigned long long)entryCount;
- (void).cxx_destruct;
- (id)cloneFileDescriptor:(int)a0 error:(id *)a1;
- (id)cloneMMCSItem:(id)a0 error:(id *)a1;
- (id)initWithCacheDirectory:(id)a0 limit:(unsigned long long)a1;

@end
