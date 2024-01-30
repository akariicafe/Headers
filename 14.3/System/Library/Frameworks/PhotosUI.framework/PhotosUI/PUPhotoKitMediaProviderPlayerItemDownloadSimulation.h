@class NSDictionary, AVPlayerItem;

@interface PUPhotoKitMediaProviderPlayerItemDownloadSimulation : PUPhotoKitMediaProviderDownloadSimulation

@property (retain, nonatomic, setter=_setResultPlayerItem:) AVPlayerItem *_resultPlayerItem;
@property (copy, nonatomic, setter=_setResultInfo:) NSDictionary *_resultInfo;
@property (copy, nonatomic) id /* block */ externalProgressHandler;
@property (readonly, copy, nonatomic) id /* block */ internalProgressHandler;
@property (copy, nonatomic) id /* block */ externalResultHandler;
@property (readonly, copy, nonatomic) id /* block */ internalResultHandler;

- (id)init;
- (void).cxx_destruct;
- (void)updateSimulationWithProgress:(double)a0;
- (void)endSimulationWithError:(id)a0;
- (void)_handleResultPlayerItem:(id)a0 info:(id)a1;

@end
