@class UIImage, NSDictionary;

@interface PUPhotoKitMediaProviderImageDownloadSimulation : PUPhotoKitMediaProviderDownloadSimulation

@property (retain, nonatomic, setter=_setResultImage:) UIImage *_resultImage;
@property (copy, nonatomic, setter=_setResultInfo:) NSDictionary *_resultInfo;
@property (copy, nonatomic) id /* block */ externalProgressHandler;
@property (readonly, copy, nonatomic) id /* block */ internalProgressHandler;
@property (copy, nonatomic) id /* block */ externalResultHandler;
@property (readonly, copy, nonatomic) id /* block */ internalResultHandler;

- (void).cxx_destruct;
- (id)init;
- (void)updateSimulationWithProgress:(double)a0;
- (void)endSimulationWithError:(id)a0;
- (void)_handleResultImage:(id)a0 info:(id)a1;

@end
