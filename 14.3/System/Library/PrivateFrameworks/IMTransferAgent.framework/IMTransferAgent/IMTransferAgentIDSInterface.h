@class NSString, IDSService, NSMutableDictionary;

@interface IMTransferAgentIDSInterface : NSObject <IDSServiceDelegate> {
    IDSService *_idsService;
    NSMutableDictionary *_uniqueIDToTransferCompletionBlockMap;
    int _numTransfers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 incomingData:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)dealloc;
- (BOOL)_sendIDSMessage:(id)a0;
- (void)_sendUploadRequest:(id)a0 topic:(id)a1 transferID:(id)a2 sourceAppID:(id)a3 allowReauthorize:(BOOL)a4;
- (void)decrementTransferCount;
- (void)incrementTransferCount;
- (void)_sendUploadResponse:(id)a0 success:(BOOL)a1 error:(id)a2 ownerID:(id)a3 signature:(id)a4 requestURLString:(id)a5 transferID:(id)a6;
- (void)_handleUploadRequest:(id)a0;
- (void)_handleUploadResponse:(id)a0;
- (BOOL)isLocalDevicePresent;
- (void)remoteUploadFileRequest:(id)a0 topic:(id)a1 transferID:(id)a2 sourceAppID:(id)a3 completionBlock:(id /* block */)a4;
- (int)currentTransfers;
- (id)localCompanionDevice;

@end
