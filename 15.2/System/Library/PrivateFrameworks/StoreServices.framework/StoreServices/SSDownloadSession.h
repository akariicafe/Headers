@class SSDownload, SSDownloadAsset, SSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SSDownloadSession : NSObject {
    SSXPCConnection *_controlConnection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _sessionID;
    long long _assetID;
    long long _downloadID;
}

@property (readonly) SSDownload *download;
@property (readonly) SSDownloadAsset *downloadAsset;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)_initWithMessage:(id)a0 controlConnection:(id)a1;
- (id)_initSSDownloadSession;
- (id)_copySessionPropertyWithKey:(const char *)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
