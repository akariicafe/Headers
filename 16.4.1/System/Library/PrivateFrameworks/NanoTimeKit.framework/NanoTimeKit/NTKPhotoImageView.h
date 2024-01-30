@class NTKCachedPhoto, NSString, CLKMediaAssetView, NSURL, NTKPhoto, CLKDevice;
@protocol NTKPhotoImageViewDelegate;

@interface NTKPhotoImageView : UIView <CLKMediaAssetViewDelegate> {
    CLKDevice *_device;
    CLKMediaAssetView *_mediaAssetView;
    NTKPhoto *_photo;
}

@property (weak, nonatomic) id<NTKPhotoImageViewDelegate> delegate;
@property (readonly, nonatomic) BOOL isPhotoIris;
@property (readonly, nonatomic) NSURL *irisURL;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NTKCachedPhoto *cachedPhoto;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPlaying;
- (void).cxx_destruct;
- (void)reset;
- (void)_loadMediaAssetView;
- (void)_unloadMediaAssetView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forDevice:(id)a1;
- (void)interruptPlayback;
- (void)mediaAssetViewDidBeginPlaying:(id)a0;
- (void)mediaAssetViewDidEndPlaying:(id)a0;
- (void)pauseWithMode:(long long)a0;
- (void)playWithMode:(long long)a0;
- (void)prepareToPlayWithMode:(long long)a0;
- (void)resumeInterruptedPlayback;
- (void)setPhoto:(id)a0 allowIris:(BOOL)a1;

@end
