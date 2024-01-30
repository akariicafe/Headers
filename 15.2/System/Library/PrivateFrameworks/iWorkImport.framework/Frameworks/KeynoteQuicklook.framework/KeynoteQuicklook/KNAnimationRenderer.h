@class KNAnimatedSlideView, KNPlaybackSession;
@protocol KNAnimationPluginContext;

@interface KNAnimationRenderer : NSObject {
    KNPlaybackSession *_session;
    KNAnimatedSlideView *_ASV;
    BOOL _areAnimationsPaused;
}

@property (readonly, nonatomic) id plugin;
@property (nonatomic) unsigned long long direction;
@property (nonatomic) double duration;
@property (readonly, nonatomic) Class pluginClass;
@property (readonly, nonatomic) id<KNAnimationPluginContext> pluginContext;
@property (nonatomic) unsigned long long signpostId;

- (void)teardown;
- (void)stopAnimations;
- (void)dealloc;
- (void)pauseAnimations;
- (void)setupPluginContext;
- (void)waitUntilAsyncRenderingIsCompleteShouldCancel:(BOOL)a0;
- (void)generateTextures;
- (void)renderTextures;
- (void)pauseAnimationsAtTime:(double)a0;
- (void)resumeAnimationsIfPausedAtTime:(double)a0;
- (void)resumeAnimationsIfPaused;
- (void)prepareAnimations;

@end
