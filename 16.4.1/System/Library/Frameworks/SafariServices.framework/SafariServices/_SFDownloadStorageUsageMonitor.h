@class SFDownloadFile, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _SFDownloadStorageUsageMonitor : NSObject <SFDownloadFileDelegate, SFDownloadStorageUsageMonitorEntryDelegate> {
    NSMutableDictionary *_entries;
    SFDownloadFile *_historyFile;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) long long usage;

- (id)init;
- (void).cxx_destruct;
- (void)_reloadDownloadHistory;
- (void)downloadFileContentsDidChange:(id)a0;
- (void)downloadFileDidChangeURL:(id)a0;
- (void)downloadFileWillBeDeleted:(id)a0;
- (void)entryDidChangeUsage:(id)a0;

@end
