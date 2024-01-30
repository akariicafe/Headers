@class NSDictionary;

@interface NTKAnalogBreatheFaceView : NTKAnalogVideoFaceView {
    NSDictionary *_editOptionDataSources;
    BOOL _shouldApplyTransform;
}

@property (nonatomic) unsigned long long currentVideoStyle;

- (void).cxx_destruct;
- (id)_swatchImageForEditOption:(id)a0 mode:(long long)a1 withSelectedOptions:(id)a2;
- (void)_applyOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_configureTimeView:(id)a0;
- (void)handleScreenBlanked;
- (id)imageForEditOption:(id)a0;
- (id)_complicationsForegroundColor;
- (id)_complicationsPlatterColor;
- (id)_tapHighlightImage;
- (void)_customizeVideoPlayerOnSetup;
- (void)_handleEitherScreenWake;
- (BOOL)_shouldAnimateComplicationsOnTap;
- (void)_faceViewWasTapped;
- (void)videoDidFinishPlayingToEnd;
- (void)videoDidBeginPlayingQueuedVideo;
- (void)customizeFaceViewForListing:(id)a0 changeEvent:(unsigned long long)a1 animated:(BOOL)a2;
- (void)_applyVideoPlayerTransform;
- (void)_updateDialSize;
- (void)setupDataSources;
- (void)_takeBacklightAssertion;
- (void)_releaseBacklightAssertion;

@end
