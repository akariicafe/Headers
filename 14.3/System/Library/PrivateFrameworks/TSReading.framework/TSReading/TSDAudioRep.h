@class TSDMovieInfo, TSKAVPlayerController, NSString, CALayer;
@protocol TSDAudioHUDController;

@interface TSDAudioRep : TSDMediaRep <TSKAVPlayerControllerDelegate, TSDAudioHUDControllerDelegate> {
    TSKAVPlayerController *mPlayerController;
    CALayer *mPlayPauseButtonLayer;
    CALayer *mAudioImageLayer;
    float mDynamicVolume;
    BOOL mIsChangingDynamicVolume;
}

@property (readonly, nonatomic) TSDMovieInfo *movieInfo;
@property (readonly, nonatomic) TSKAVPlayerController *playerController;
@property (readonly, nonatomic) id<TSDAudioHUDController> audioHUDController;
@property (readonly, nonatomic) float volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)layerClass;
- (void)dealloc;
- (void)willBeginZooming;
- (BOOL)isDraggable;
- (void)willBeRemoved;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)directlyManagesLayerContent;
- (void)processChangedProperty:(int)a0;
- (void)playbackDidStopForPlayerController:(id)a0;
- (void)playerController:(id)a0 playbackDidFailWithError:(id)a1;
- (void)willBeginReadMode;
- (void)didEndZooming;
- (void)willUpdateLayer:(id)a0;
- (void)updateLayerGeometryFromLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForStandardKnobs;
- (id)hitRepChrome:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)shouldShowKnobs;
- (BOOL)shouldShowSelectionHighlight;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (void)becameSelected;
- (void)becameNotSelected;
- (BOOL)shouldShowDragHUD;
- (BOOL)shouldShowSizesInRulers;
- (void)drawInContextWithoutEffects:(struct CGContext { } *)a0 withContent:(BOOL)a1 withStroke:(BOOL)a2 withOpacity:(BOOL)a3 forAlphaOnly:(BOOL)a4 drawChildren:(BOOL)a5;
- (BOOL)shouldShowMediaReplaceUI;
- (BOOL)shouldAllowReplacementFromPaste;
- (void)p_updateRepeatMode;
- (void)p_updateVolume;
- (void)p_updateStartTime;
- (void)p_updateEndTime;
- (BOOL)p_shouldPlayerControllerExistThroughoutSelection;
- (void)p_setupPlayerControllerIfNecessary;
- (void)p_teardownPlayerController;
- (BOOL)canResetMediaSize;
- (void)dynamicVolumeChangeDidBegin;
- (void)dynamicVolumeUpdateToValue:(float)a0;
- (void)dynamicVolumeChangeDidEnd;
- (BOOL)p_shouldShowPlayPauseLayers;
- (BOOL)p_isPlaying;
- (void)p_updateButtonForPlaying:(BOOL)a0 pressed:(BOOL)a1;
- (BOOL)hitPlayPauseButtonWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)p_isEditingAnimations;
- (void)updatePlayButtonForPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)shouldAllowReplacementFromDrop;
- (BOOL)providesGuidesWhileAligning;
- (BOOL)exclusivelyProvidesGuidesWhileAligning;
- (id)textureWithContext:(id)a0;

@end
