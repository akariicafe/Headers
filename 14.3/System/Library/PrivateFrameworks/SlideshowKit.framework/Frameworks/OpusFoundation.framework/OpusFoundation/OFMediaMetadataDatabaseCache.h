@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface OFMediaMetadataDatabaseCache : NSObject {
    NSString *_diskCacheFilepath;
    struct sqlite3 { } *_sqliteDatabase;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (void)performBlock:(id /* block */)a0;
- (id)init;
- (void)dealloc;
- (BOOL)_open;
- (void)performBlockAndWait:(id /* block */)a0;
- (void)invalidateDiskCaches;
- (id)initWithDiskCacheFilepath:(id)a0;
- (id)entryForIdentifier:(id)a0;
- (id)newEntryWithIdentifier:(id)a0;

@end
