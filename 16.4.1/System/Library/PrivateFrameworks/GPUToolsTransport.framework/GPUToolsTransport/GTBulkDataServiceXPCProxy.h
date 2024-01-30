@class GTServiceConnection, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface GTBulkDataServiceXPCProxy : NSObject <GTBulkDataService> {
    NSObject<OS_os_log> *_log;
    GTServiceConnection *_connection;
    unsigned long long _chunkSize;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (void).cxx_destruct;
- (id)downloadData:(unsigned long long)a0;
- (void)downloadData:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)downloadData:(unsigned long long)a0 chunkSize:(unsigned long long)a1 chunkHandler:(id /* block */)a2;
- (id)downloadData:(unsigned long long)a0 usingChunkSize:(unsigned long long)a1;
- (void)downloadData:(unsigned long long)a0 usingChunkSize:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;
- (unsigned long long)newUploadOfSize:(unsigned long long)a0;
- (BOOL)uploadChunk:(id)a0 forHandle:(unsigned long long)a1;
- (unsigned long long)uploadData:(id)a0;
- (void)uploadData:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)uploadData:(id)a0 usingChunkSize:(unsigned long long)a1;
- (void)uploadData:(id)a0 usingChunkSize:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
