@interface IMTranscoder_AV : IMTranscoder

+ (id)supportedUTIs;

- (unsigned long long)_fileSizeForTransfer:(id)a0;
- (BOOL)_isHEVCVideo:(id)a0;
- (void)_transcodeVideoAsync:(id)a0 target:(long long)a1 maxBytes:(unsigned long long)a2 isAnimojiV2:(BOOL)a3 removeAlpha:(BOOL)a4 preserveHDR:(BOOL)a5 isAA:(BOOL)a6 preserveAA:(BOOL)a7 userInfo:(id)a8 completionHandler:(id /* block */)a9;
- (long long)shouldTranscodeTransfer:(id)a0 transcoderUserInfo:(id)a1 target:(long long)a2 utiType:(id)a3 allowUnfilteredUTIs:(id)a4 fileSizeLimit:(unsigned long long)a5 commonCapabilities:(id)a6;
- (long long)shouldTranscodeTransfer:(id)a0 transcoderUserInfo:(id)a1 target:(long long)a2 utiType:(id)a3 allowUnfilteredUTIs:(id)a4 isAnimojiV2:(BOOL)a5 removeAlpha:(BOOL)a6 isHDR:(BOOL)a7 preserveHDR:(BOOL)a8 isAA:(BOOL)a9 preserveAA:(BOOL)a10 fileSizeLimit:(unsigned long long)a11;
- (void)transcodeFileTransfer:(id)a0 utiType:(id)a1 allowUnfilteredUTIs:(id)a2 target:(long long)a3 sizes:(id)a4 commonCapabilities:(id)a5 maxDimension:(unsigned long long)a6 transcoderUserInfo:(id)a7 representations:(long long)a8 completionBlock:(id /* block */)a9;

@end
