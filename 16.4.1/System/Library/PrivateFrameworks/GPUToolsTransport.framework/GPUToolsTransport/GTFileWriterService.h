@class NSMutableDictionary, NSUUID, NSURL, NSObject;
@protocol OS_os_log, GTURLAccessProvider, OS_dispatch_queue, GTRemoteConnectionProvider;

@interface GTFileWriterService : NSObject <GTFileWriterService> {
    NSObject<OS_os_log> *_log;
    NSURL *_baseURL;
    NSMutableDictionary *_sessions;
    id<GTRemoteConnectionProvider> _remoteConnectionProvider;
    unsigned long long _sessionCounts;
    NSUUID *_deviceUUID;
    NSObject<OS_dispatch_queue> *_fileTransferQueue;
    id<GTURLAccessProvider> _urlAccessProvider;
}

- (void)abortSession:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)beginTransferSessionWithFileEntries:(id)a0 basePath:(id)a1 device:(id)a2 config:(struct { unsigned int x0; unsigned int x1; unsigned int x2; })a3 sessionID:(unsigned long long)a4 completionHandler:(id /* block */)a5;
- (void)finishSession:(unsigned long long)a0;
- (id)initWithRemoteConnectionProvider:(id)a0 deviceUUID:(id)a1 urlAccessProvider:(id)a2;
- (void)initiateTransfer:(id)a0 basePath:(id)a1 device:(id)a2 config:(struct { unsigned int x0; unsigned int x1; unsigned int x2; })a3 completionHandler:(id /* block */)a4;
- (void)writeFileChunks:(id)a0 withData:(id)a1 session:(unsigned long long)a2;

@end
