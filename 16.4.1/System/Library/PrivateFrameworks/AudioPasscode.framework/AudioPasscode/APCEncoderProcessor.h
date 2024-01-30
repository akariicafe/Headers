@class AUAudioUnitOfflineProcessor, APCPlayerEmbedInfo, AUPasscodeEncoder;

@interface APCEncoderProcessor : NSObject {
    AUPasscodeEncoder *_encoderAU;
    AUAudioUnitOfflineProcessor *_processor;
    APCPlayerEmbedInfo *_passcodeEmbedInfo;
}

- (void)run;
- (void).cxx_destruct;
- (float)evaluateAsset:(id)a0;
- (BOOL)getEmbeddingInfo:(id *)a0;
- (id)initWithAssetURL:(id)a0 codecConfig:(id)a1 payload:(id)a2 outputURL:(id)a3 error:(id *)a4;

@end
