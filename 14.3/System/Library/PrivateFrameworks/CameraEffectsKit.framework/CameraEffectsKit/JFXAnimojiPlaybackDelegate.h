@class JFXAnimojiEffectRenderer, JFXSharedMediaDataReaderManager, NSString, JFXCachedAnimojiImage, JFXDepthDataMediaReader, JFXARMetadataMediaReader, JFXAnimojiEffect, NSObject;
@protocol OS_dispatch_queue, JFXPlayableElement;

@interface JFXAnimojiPlaybackDelegate : NSObject <PVCompositeDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *mediaDataReaderUpdateQueue;
@property (retain, nonatomic) JFXARMetadataMediaReader *arMetadataReader;
@property (retain, nonatomic) JFXDepthDataMediaReader *depthReader;
@property (retain, nonatomic) JFXSharedMediaDataReaderManager *sharedMediaDataReaderManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *animojiRenderQueue;
@property (retain, nonatomic) JFXAnimojiEffectRenderer *animojiRenderer;
@property (retain, nonatomic) JFXAnimojiEffect *animojiEffect;
@property (nonatomic) BOOL useAnimojiBlendShapes;
@property (readonly, nonatomic) id<JFXPlayableElement> playableElement;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } playbackElementPlaybackPresentationOffset;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } playbackElementPlaybackMediaRange;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delayedUnloadPlaybackQueue;
@property (copy, nonatomic) id /* block */ delayedUnloadPlaybackResourcesBlock;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cachedAnimojiImageQueue;
@property (retain, nonatomic) JFXCachedAnimojiImage *cachedAnimojiImage;
@property (nonatomic) BOOL isScrubbing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)JFX_loadMediaDataReaders;
- (void)JFX_unloadMediaDataReaders;
- (void)JFX_setMediaDataReaderScrubbingMode:(BOOL)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })jfx_mediaTimeFromPlaybackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithPlayableElement:(id)a0 sharedMediaDataReaderManager:(id)a1;
- (id)renderWithInputs:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 userContext:(id)a2 compositeContext:(id)a3;
- (id)preprocessWithInputs:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 userContext:(id)a2 compositeContext:(id)a3;
- (void)loadWithUserContext:(id)a0;
- (void)unloadWithUserContext:(id)a0;
- (void)JFX_initPlaybackLoadingProperies;
- (void)JFX_initAnimojiRenderingProperies;
- (void)JFX_initMediaDataReaderProperties;
- (void)JFX_initAnimojiImageBufferCachingProperties;
- (void)JFX_loadResourcesForPlayback;
- (void)JFX_requestUnloadResourcesForPlayback;
- (id)JFX_cachedAnimojiImageForMediaTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forAnimojiRenderingAttributes:(id)a1;
- (id)JFX_arMetadataReaderItemForMediaTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)JFX_avDepthDataFromDepthDataForMediaTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)JFX_cacheAnimojiImage:(id)a0;
- (id)JFX_renderAnimojiEffect:(id)a0 forTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 withARFrame:(id)a2 depthData:(id)a3 inputBufferSize:(struct CGSize { double x0; double x1; })a4 withInterfaceOrientation:(long long)a5 preRecordedBlendShapes:(id)a6;
- (void)JFX_unloadAnimojiRenderer;
- (void)JFX_loadAnimojiRenderer;
- (void)JFX_unloadResourcesForPlayback;
- (void)JFX_clearCachedAnimojiImages;

@end
