@interface IMTranscoder : NSObject

+ (id)supportedUTIs;
+ (BOOL)shouldPreserveHDREncoding:(id)a0;
+ (BOOL)shouldUseHEIFEncoding:(id)a0 sourceUTI:(id)a1;
+ (BOOL)supportsUTI:(id)a0;

- (long long)shouldTranscodeTransfer:(id)a0 transcoderUserInfo:(id)a1 target:(long long)a2 utiType:(id)a3 allowUnfilteredUTIs:(id)a4 fileSizeLimit:(unsigned long long)a5;
- (void)transcodeFileTransfer:(id)a0 utiType:(id)a1 allowUnfilteredUTIs:(id)a2 target:(long long)a3 sizes:(id)a4 commonCapabilities:(id)a5 maxDimension:(unsigned long long)a6 transcoderUserInfo:(id)a7 representations:(long long)a8 completionBlock:(id /* block */)a9;
- (void)validateFileTransfer:(id)a0 utiType:(id)a1 completionBlock:(id /* block */)a2;
- (BOOL)transcodeProcessingRequired:(long long)a0;

@end
