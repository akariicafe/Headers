@class NSMutableDictionary, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface GTBulkDataService : NSObject <GTBulkDataService> {
    NSObject<OS_os_log> *_log;
    unsigned long long _nextDownloadHandle;
    NSMutableDictionary *_dataDownloadStore;
    unsigned long long _nextUploadHandle;
    NSMutableDictionary *_dataUploadStore;
    NSObject<OS_dispatch_queue> *_dataAccessQueue;
    NSObject<OS_dispatch_queue> *_dataTransferQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)downloadData:(unsigned long long)a0 chunkSize:(unsigned long long)a1 chunkHandler:(id /* block */)a2;
- (unsigned long long)handoverDataForDownload:(id)a0;
- (unsigned long long)newUploadOfSize:(unsigned long long)a0;
- (id)takeUploadedDataForHandle:(unsigned long long)a0;
- (BOOL)uploadChunk:(id)a0 forHandle:(unsigned long long)a1;

@end
