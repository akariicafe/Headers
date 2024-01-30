@class NSData, NSString, NSDictionary;

@interface PUPhotoKitMediaProviderImageDataDownloadSimulation : PUPhotoKitMediaProviderDownloadSimulation

@property (retain, nonatomic, setter=_setResultImageData:) NSData *_resultImageData;
@property (retain, nonatomic, setter=_setResultDataUTI:) NSString *_resultDataUTI;
@property (nonatomic, setter=_setResultOrientation:) long long _resultOrientaton;
@property (copy, nonatomic, setter=_setResultInfo:) NSDictionary *_resultInfo;
@property (copy, nonatomic) id /* block */ externalProgressHandler;
@property (readonly, copy, nonatomic) id /* block */ internalProgressHandler;
@property (copy, nonatomic) id /* block */ externalResultHandler;
@property (readonly, copy, nonatomic) id /* block */ internalResultHandler;

- (void).cxx_destruct;
- (id)init;
- (void)updateSimulationWithProgress:(double)a0;
- (void)endSimulationWithError:(id)a0;
- (void)_handleResultImageData:(id)a0 dataUTI:(id)a1 orientation:(long long)a2 info:(id)a3;

@end
