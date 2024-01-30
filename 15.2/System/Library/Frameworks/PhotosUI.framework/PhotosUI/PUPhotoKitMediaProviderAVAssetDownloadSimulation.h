@class AVAsset, AVAudioMix, NSDictionary;

@interface PUPhotoKitMediaProviderAVAssetDownloadSimulation : PUPhotoKitMediaProviderDownloadSimulation

@property (retain, nonatomic, setter=_setResultAVAsset:) AVAsset *_resultAVAsset;
@property (retain, nonatomic, setter=_setResultAudioMix:) AVAudioMix *_resultAudioMix;
@property (copy, nonatomic, setter=_setResultInfo:) NSDictionary *_resultInfo;
@property (copy, nonatomic) id /* block */ externalProgressHandler;
@property (readonly, copy, nonatomic) id /* block */ internalProgressHandler;
@property (copy, nonatomic) id /* block */ externalResultHandler;
@property (readonly, copy, nonatomic) id /* block */ internalResultHandler;

- (void).cxx_destruct;
- (id)init;
- (void)updateSimulationWithProgress:(double)a0;
- (void)endSimulationWithError:(id)a0;
- (void)_handleResultAVAsset:(id)a0 audioMix:(id)a1 info:(id)a2;

@end
