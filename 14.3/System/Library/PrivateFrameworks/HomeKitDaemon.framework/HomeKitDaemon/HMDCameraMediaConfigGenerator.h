@interface HMDCameraMediaConfigGenerator : HMFObject

- (BOOL)extractSelectedConfigFromProtocolParameters:(id)a0 videoStreamConfig:(id *)a1 audioStreamConfig:(id *)a2;
- (BOOL)extractReselectedConfigFromVideoTier:(id)a0 videoStreamConfig:(id *)a1;
- (BOOL)_loadAVCVideoStreamConfig:(id)a0 protocolParameters:(id)a1;
- (BOOL)_loadAVCAudioStreamConfig:(id)a0 protocolParameters:(id)a1;
- (BOOL)_loadConfig:(id)a0 cipherCuite:(id)a1;
- (void)_loadConfig:(id)a0 sendSrtpParameters:(id)a1 receiveSrtpParameters:(id)a2;
- (void)_loadMiscConfig:(id)a0;

@end
