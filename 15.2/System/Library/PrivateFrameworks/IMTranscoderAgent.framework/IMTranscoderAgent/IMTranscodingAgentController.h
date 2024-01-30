@class NSArray, IMTranscoder_TextRendering, NSObject;
@protocol OS_dispatch_queue;

@interface IMTranscodingAgentController : NSObject {
    NSArray *_transcoders;
    NSArray *_fallbackTranscoders;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_textValidationQueue;
    NSObject<OS_dispatch_queue> *_previewGenerationQueue;
    IMTranscoder_TextRendering *_textTranscoder;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)generateSnapshotForMessageGUID:(id)a0 payloadURL:(id)a1 balloonBundleID:(id)a2 isFromMe:(BOOL)a3 completionBlock:(id /* block */)a4;
- (void)validateFileTransfer:(id)a0 utiType:(id)a1 completionBlock:(id /* block */)a2;
- (void)validateTextRenderingForMessage:(id)a0 completionBlock:(id /* block */)a1;
- (void)_registerTranscoders;
- (id)_findTranscoderForUTI:(id)a0;
- (BOOL)shouldProcessFileTransfer:(id)a0 utiType:(id)a1 transcoderUserInfo:(id)a2 target:(long long)a3 allowUnfilteredUTIs:(id)a4 fileSizeLimit:(unsigned long long)a5;
- (void)transcodeFileTransferContents:(id)a0 utiType:(id)a1 allowUnfilteredUTIs:(id)a2 target:(long long)a3 sizes:(id)a4 commonCapabilities:(id)a5 maxDimension:(unsigned long long)a6 transcoderUserInfo:(id)a7 fallback:(BOOL)a8 representations:(long long)a9 completionBlock:(id /* block */)a10;
- (void)transcodeFileTransferData:(id)a0 balloonBundleID:(id)a1 attachments:(id)a2 fallBack:(BOOL)a3 completionBlock:(id /* block */)a4;
- (void)generatePreview:(id)a0 previewURL:(id)a1 balloonBundleID:(id)a2 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a3 completionBlock:(id /* block */)a4;
- (void)generatePreviewMetadata:(id)a0 destinationURL:(id)a1 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a2 completionBlock:(id /* block */)a3;
- (void)sizePreview:(id)a0 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a1 completionBlock:(id /* block */)a2;
- (void)decodeiMessageAppPayload:(id)a0 bundleID:(id)a1 completionBlock:(id /* block */)a2;

@end
