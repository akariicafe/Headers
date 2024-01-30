@class NSMutableSet, NSMutableDictionary;

@interface SMSAttachmentController : NSObject {
    NSMutableDictionary *_connectionMap;
    NSMutableDictionary *_fileTransferMap;
    NSMutableDictionary *_contextMap;
    NSMutableDictionary *_blockMap;
    NSMutableDictionary *_peerCompletionBlocks;
}

@property (retain, nonatomic) NSMutableSet *pendingRemoteFileRequests;

+ (id)sharedInstance;

- (void)dealloc;
- (void)_sendFileURL:(id)a0 forMessageGUID:(id)a1 attachmentIndex:(long long)a2;
- (void)_sizeLimitsForTransfer:(id)a0 bigSize:(unsigned long long *)a1 smallSize:(unsigned long long *)a2;
- (unsigned long long)maxTransferAudioFileSizeForWifi:(unsigned long long *)a0 cell:(unsigned long long *)a1;
- (void)maxTransferFileSizeForWifi:(unsigned long long *)a0 cell:(unsigned long long *)a1;
- (unsigned long long)maxTransferVideoFileSizeForWifi:(unsigned long long *)a0 cell:(unsigned long long *)a1;
- (void)processAttachmentsForMessage:(id)a0 generateTextParts:(BOOL)a1 lastAddressedHandle:(id)a2 lastAddressedSIMID:(id)a3 completionBlock:(id /* block */)a4;
- (void)processAttachmentsForPeerRelayForMessage:(id)a0 lastAddressHandle:(id)a1 lastAddressedSIMID:(id)a2 completionBlock:(id /* block */)a3 uploadFailureBlock:(id /* block */)a4;
- (void)remoteFileResponse:(id)a0;
- (void)remotefileRequest:(id)a0 attempts:(long long)a1;
- (void)retrieveAttachmentsForMessage:(id)a0 displayID:(id)a1 token:(id)a2 completionBlock:(id /* block */)a3;
- (void)retrieveLocalFileTransfer:(id)a0 attachmentIndex:(unsigned long long)a1 path:(id)a2 requestURLString:(id)a3 ownerID:(id)a4 signature:(id)a5 decryptionKey:(id)a6 requestedSize:(id)a7 fileSize:(unsigned long long)a8 progressBlock:(id /* block */)a9 completionBlock:(id /* block */)a10;
- (BOOL)shouldSendLowResolutionOnly;

@end
