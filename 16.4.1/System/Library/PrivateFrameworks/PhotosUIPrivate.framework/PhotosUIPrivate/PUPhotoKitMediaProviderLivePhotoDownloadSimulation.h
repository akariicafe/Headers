@class NSDictionary, PHLivePhoto;

@interface PUPhotoKitMediaProviderLivePhotoDownloadSimulation : PUPhotoKitMediaProviderDownloadSimulation

@property (retain, nonatomic, setter=_setResultLivePhoto:) PHLivePhoto *_resultLivePhoto;
@property (copy, nonatomic, setter=_setResultInfo:) NSDictionary *_resultInfo;
@property (copy, nonatomic) id /* block */ externalProgressHandler;
@property (readonly, copy, nonatomic) id /* block */ internalProgressHandler;
@property (copy, nonatomic) id /* block */ externalResultHandler;
@property (readonly, copy, nonatomic) id /* block */ internalResultHandler;

- (id)init;
- (void).cxx_destruct;
- (void)_handleResultLivePhoto:(id)a0 info:(id)a1;
- (void)endSimulationWithError:(id)a0;
- (void)updateSimulationWithProgress:(double)a0;

@end
