@class NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface IMTranscodeController : NSObject {
    NSObject<OS_xpc_object> *_connection;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;

+ (id)sharedInstance;

- (void)_disconnected;
- (void)generateMetadata:(id)a0 metadataURL:(id)a1 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a2 completionBlock:(id /* block */)a3 blockUntilReply:(BOOL)a4;
- (BOOL)_connect;
- (void).cxx_destruct;
- (id)init;
- (void)generatePreview:(id)a0 previewURL:(id)a1 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a2 completionBlock:(id /* block */)a3 blockUntilReply:(BOOL)a4;
- (void)transcodeFallbackFileTransferPayloadData:(id)a0 balloonBundleID:(id)a1 attachments:(id)a2 completionBlock:(id /* block */)a3;
- (void)transcodeFallbackFileTransferContents:(id)a0 utiType:(id)a1 allowUnfilteredUTIs:(id)a2 target:(long long)a3 sizes:(id)a4 commonCapabilities:(id)a5 maxDimension:(unsigned long long)a6 transcoderUserInfo:(id)a7 representations:(long long)a8 completionBlock:(id /* block */)a9;
- (void)transcodeFileTransferContents:(id)a0 utiType:(id)a1 allowUnfilteredUTIs:(id)a2 target:(long long)a3 sizes:(id)a4 commonCapabilities:(id)a5 maxDimension:(unsigned long long)a6 transcoderUserInfo:(id)a7 representations:(long long)a8 completionBlock:(id /* block */)a9;
- (void)decodeiMessageAppPayload:(id)a0 bundleID:(id)a1 completionBlock:(id /* block */)a2 blockUntilReply:(BOOL)a3;
- (void)generateSnapshotForMessageGUID:(id)a0 payloadURL:(id)a1 balloonBundleID:(id)a2 isFromMe:(BOOL)a3 completionBlock:(id /* block */)a4;
- (void)sizePreview:(id)a0 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a1 completionBlock:(id /* block */)a2 blockUntilReply:(BOOL)a3;
- (void)validateTextRenderingForMessage:(id)a0 completionBlock:(id /* block */)a1 blockUntilReply:(BOOL)a2;
- (void)generatePreview:(id)a0 previewURL:(id)a1 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a2 balloonBundleID:(id)a3 completionBlock:(id /* block */)a4 blockUntilReply:(BOOL)a5;
- (void)transcodeLocalTransferPayloadData:(id)a0 balloonBundleID:(id)a1 completionBlock:(id /* block */)a2;
- (void)validateFileTransfer:(id)a0 utiType:(id)a1 completionBlock:(id /* block */)a2;
- (void)validateTextRenderingForMessage:(id)a0 completionBlock:(id /* block */)a1;
- (void)sizePreview:(id)a0 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a1 completionBlock:(id /* block */)a2;
- (void)_validateFileTransfer:(id)a0 utiType:(id)a1 retries:(int)a2 completionBlock:(id /* block */)a3;
- (void)_validateTextRenderingForMessage:(id)a0 retries:(int)a1 completionBlock:(id /* block */)a2 blockUntilReply:(BOOL)a3;
- (void)_transcodeFileTransferContents:(id)a0 utiType:(id)a1 allowUnfilteredUTIs:(id)a2 target:(long long)a3 sizes:(id)a4 commonCapabilities:(id)a5 maxDimension:(unsigned long long)a6 transcoderUserInfo:(id)a7 representations:(long long)a8 fallBack:(BOOL)a9 retries:(int)a10 completionBlock:(id /* block */)a11;
- (void)_transcodeFileTransferPayloadData:(id)a0 balloonBundleID:(id)a1 attachments:(id)a2 retries:(unsigned long long)a3 fallBack:(BOOL)a4 completionBlock:(id /* block */)a5;
- (void)_generatePreview:(id)a0 previewURL:(id)a1 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a2 retries:(unsigned long long)a3 balloonBundleID:(id)a4 completionBlock:(id /* block */)a5 blockUntilReply:(BOOL)a6;
- (void)_generateMetadata:(id)a0 metadataURL:(id)a1 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a2 retries:(unsigned long long)a3 completionBlock:(id /* block */)a4 blockUntilReply:(BOOL)a5;
- (void)sizePreview:(id)a0 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a1 retries:(unsigned long long)a2 completionBlock:(id /* block */)a3 blockUntilReply:(BOOL)a4;
- (void)_decodeiMessageAppPayload:(id)a0 bundleID:(id)a1 retries:(unsigned long long)a2 completionBlock:(id /* block */)a3 blockUntilReply:(BOOL)a4;
- (void)generatePreview:(id)a0 previewURL:(id)a1 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a2 completionBlock:(id /* block */)a3;
- (void)generateMetadata:(id)a0 metadataURL:(id)a1 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a2 completionBlock:(id /* block */)a3;

@end
