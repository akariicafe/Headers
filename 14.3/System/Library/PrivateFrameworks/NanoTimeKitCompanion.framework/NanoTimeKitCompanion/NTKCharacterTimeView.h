@class NSString, CLKUIQuadView, NTKCharacterRenderer, NTKCharacterResourceLoader, CLKDevice, NTKCharacterQuad;

@interface NTKCharacterTimeView : UIView <NTKTimeView> {
    CLKDevice *_device;
    NTKCharacterResourceLoader *_loader;
    NTKCharacterQuad *_characterQuad;
    CLKUIQuadView *_characterQuadView;
    NTKCharacterRenderer *_renderers[2];
    NTKCharacterRenderer *_renderer;
    unsigned long long _character;
    unsigned char _isRenderOneFrameRequested : 1;
    unsigned char _isAnimating : 1;
    unsigned char _isBackgrounded : 1;
    unsigned char _renderWasIgnored : 1;
    unsigned char _layoutWasIgnored : 1;
}

@property (readonly, nonatomic) CLKUIQuadView *quadView;
@property (nonatomic, getter=isFrozen) BOOL frozen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_startAnimation;
- (void)setTimeOffset:(double)a0;
- (void)setCharacter:(unsigned long long)a0;
- (void)dealloc;
- (void)_willEnterForeground;
- (void)_endScrubbing;
- (void)setOverrideDate:(id)a0;
- (void)layoutSubviews;
- (void)setAnimationFrameInterval:(long long)a0;
- (void)_stopAnimation;
- (void)_didEnterBackground;
- (void)_configureForEditMode:(long long)a0;
- (void)_configureForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (void)setOverrideDate:(id)a0 duration:(double)a1;
- (void)prepareToZoom;
- (void)cleanupAfterZoom;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forDevice:(id)a1;
- (void)setClothingColor:(id)a0 andDesaturation:(double)a1;
- (void)setZoomFraction:(double)a0 diameter:(double)a1;
- (void)scrubToDate:(id)a0;
- (void)startScrubbingAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)endScrubbingAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_layoutRenderer;
- (void)setOverrideDate:(id)a0 animated:(BOOL)a1 enteringOrb:(BOOL)a2 completion:(id /* block */)a3;
- (void)enumarateRenderers:(id /* block */)a0;
- (void)renderOneFrame;
- (void)setClothingColor:(id)a0 andDesaturation:(double)a1 forCharacter:(unsigned long long)a2;
- (void)_renderOneFrame;
- (void)setOverrideDate:(id)a0 animated:(BOOL)a1 enteringOrb:(BOOL)a2;
- (void)applyCharacterTransition:(double)a0 fromCharacter:(unsigned long long)a1 toCharacter:(unsigned long long)a2;

@end
