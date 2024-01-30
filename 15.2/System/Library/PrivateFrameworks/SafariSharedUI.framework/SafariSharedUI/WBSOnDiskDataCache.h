@class WBSCoalescedAsynchronousWriter, NSString, NSMutableDictionary, NSURL, NSMutableSet, NSObject, NSCache;
@protocol WBSDataCacheDelegate, OS_dispatch_queue;

@interface WBSOnDiskDataCache : NSObject <WBSDataCache> {
    NSObject<OS_dispatch_queue> *_diskAccessQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSCache *_entriesForKeyStringsCache;
    NSMutableSet *_pendingKeyStringRequests;
    NSMutableSet *_missingEntryKeyStrings;
    NSMutableDictionary *_cacheSettings;
    WBSCoalescedAsynchronousWriter *_cacheSettingsWriter;
}

@property (nonatomic) BOOL isInMemoryCacheEnabled;
@property (readonly, nonatomic) NSURL *cacheDirectoryURL;
@property (readonly, nonatomic, getter=isTerminating) BOOL terminating;
@property (weak, nonatomic) id<WBSDataCacheDelegate> dataCacheDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)requestEntryForKeyString:(id)a0;
- (id)initWithCacheDirectoryURL:(id)a0;
- (long long)entryStateForKeyString:(id)a0;
- (void)removeEntriesForKeyStrings:(id)a0 completionHandler:(id /* block */)a1;
- (void)setSetting:(id)a0 forKey:(id)a1;
- (void)_didFailToLoadEntryForKeyString:(id)a0 error:(id)a1;
- (long long)_internalEntryStateForKeyString:(id)a0;
- (void)setUp;
- (id)_cacheSettingsFileURL;
- (void)_notifyDidFinishSettingUp;
- (void)_internalQueueDispatchAsync:(id /* block */)a0;
- (id)_fileLocationForKeyString:(id)a0;
- (void).cxx_destruct;
- (void)savePendingChangesBeforeTearDown;
- (id)init;
- (id)_diskAccessQueueName;
- (void)removeEntriesForKeyStringsNotIncludedIn:(id)a0 completionHandler:(id /* block */)a1;
- (void)_dispatchDiskAccessBlock:(id /* block */)a0;
- (void)getEntryURLForKeyString:(id)a0 completionHandler:(id /* block */)a1;
- (void)_didLoadEntry:(id)a0 forKeyString:(id)a1;
- (void)setEntry:(id)a0 forKeyString:(id)a1 completionHandler:(id /* block */)a2;
- (id)_internalQueueName;
- (id)settingForKey:(id)a0;
- (void)reset;
- (void)_internalQueueDispatchSync:(id /* block */)a0;

@end
