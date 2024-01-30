@interface MessageTranscodeController : NSObject

+ (id)sharedInstance;

- (void)generateSnapshotForMessageGUID:(id)a0 payloadData:(id)a1 balloonBundleID:(id)a2 isFromMe:(BOOL)a3 completionBlock:(id /* block */)a4;
- (void)transcodeFallbackFileTransferContents:(id)a0 utiType:(id)a1 transcoderUserInfo:(id)a2 sizes:(id)a3 commonCapabilities:(id)a4 representations:(long long)a5 completionBlock:(id /* block */)a6;
- (void)transcodeFileTransferContents:(id)a0 utiType:(id)a1 transcoderUserInfo:(id)a2 sizes:(id)a3 commonCapabilities:(id)a4 representations:(long long)a5 completionBlock:(id /* block */)a6;
- (void)transcodePayloadData:(id)a0 balloonBundleID:(id)a1 attachments:(id)a2 completionBlock:(id /* block */)a3;

@end
