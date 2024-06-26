@class KNAnimatedSlideModel, NSMapTable, TSDCanvas, KNSlide, NSObject, KNSlideNode, NSMutableArray, KNPlaybackSession, NSSet, NSString, KNAnimationDelayedCallbacks, NSMutableSet, NSIndexSet, NSArray, NSLock;
@protocol TSDCanvasProxyDelegate, OS_os_log;

@interface KNAnimatedSlideView : NSObject <KNCanvasDelegate, TSDConnectedInfoReplacing, TSDMetalRenderer> {
    unsigned long long _animationsActive;
    unsigned long long _animationsStarted;
    NSMutableSet *_ambientBuildRenderers;
    NSMapTable *_buildsToStartAfterAmbientBuildStartsMap;
    NSLock *_textureDescriptionAndSetForRepMapLock;
    NSMapTable *_textureDescriptionAndSetForRepMap;
    NSArray *_precachedStaticTextureSets;
    BOOL _didRenderPrecachedStaticTextures;
    double _transitionStartTime;
    NSMapTable *_eventToSlideTextureMap;
    NSMutableArray *_isMotionBlurEnabledForEvent;
    BOOL _isSlideBuildable;
    BOOL _shouldStopAnimations;
    BOOL _isInDelayBeforeActiveBuild;
    BOOL _sInDelayBeforeActiveTransition;
    BOOL _isSerialized;
    BOOL _transitionHasFinishedCallbackPending;
    BOOL _wasMetalLayerActiveWhenPaused;
    id _eventStartCallbackTarget;
    SEL _eventStartCallbackSelector;
    id _eventAnimationActiveCallbackTarget;
    SEL _eventAnimationActiveCallbackSelector;
    id _eventEndCallbackTarget;
    SEL _eventEndCallbackSelector;
    id _eventImmediateEndCallbackTarget;
    SEL _eventImmediateEndCallbackSelector;
    id _ambientBuildStartCallbackTarget;
    SEL _ambientBuildStartCallbackSelector;
    id _ambientBuildEndCallbackTarget;
    SEL _ambientBuildEndCallbackSelector;
    NSObject<OS_os_log> *_signpostLog;
}

@property (retain, nonatomic) TSDCanvas *canvas;
@property (retain) NSLock *canvasLock;
@property (readonly, nonatomic) unsigned long long slideNumber;
@property (readonly, nonatomic) NSArray *infosCurrentlyVisible;
@property (readonly, nonatomic) NSArray *allReps;
@property (readonly, nonatomic) NSArray *repsCurrentlyVisible;
@property (nonatomic) unsigned long long currentEventIndex;
@property (readonly, nonatomic) unsigned long long buildEventCount;
@property (readonly, nonatomic) BOOL isAnimating;
@property (readonly, nonatomic) BOOL isNonAmbientAnimationAnimating;
@property (readonly, nonatomic) BOOL isNonAmbientAnimationActive;
@property (readonly, nonatomic) BOOL isDoneAnimating;
@property (readonly, nonatomic) BOOL isAmbientAnimationAnimating;
@property (readonly, nonatomic) BOOL isInDelayBeforeActiveTransition;
@property (readonly, copy, nonatomic) NSMutableSet *activeAnimatedBuilds;
@property (readonly, nonatomic) NSArray *allInfos;
@property (readonly, nonatomic) NSArray *allInfosIncludingAudio;
@property (copy, nonatomic) NSIndexSet *eventIndexesToAnimate;
@property (nonatomic) BOOL hasEventStarted;
@property (readonly, nonatomic) KNAnimatedSlideModel *model;
@property (readonly, nonatomic) KNAnimatedSlideView *nextASV;
@property (nonatomic) BOOL playsAutomaticTransitions;
@property (readonly, weak, nonatomic) KNPlaybackSession *session;
@property (readonly, nonatomic) KNSlide *slide;
@property (readonly, nonatomic) KNSlideNode *slideNode;
@property (nonatomic) BOOL triggerQueued;
@property (readonly, nonatomic) BOOL shouldPrepareAnimationsAsynchronously;
@property (readonly, nonatomic) KNAnimationDelayedCallbacks *delayedCallbacks;
@property (readonly, nonatomic) BOOL isPrintingCanvas;
@property (readonly, nonatomic) BOOL isExportingToPDF;
@property (readonly) NSArray *mediaControllers;
@property (readonly, nonatomic) NSSet *activeMovieHosts;
@property (readonly, nonatomic) NSSet *movieRenderers;
@property (readonly) NSArray *movieControllers;
@property (readonly) BOOL isPlayingMoviesWithMovieControllers;
@property (readonly, nonatomic) BOOL shouldPreCache;
@property (readonly, nonatomic) id<TSDCanvasProxyDelegate> canvasProxyDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)registerUserDefaults;
+ (id)keyPathsForValuesAffectingActiveMovieHosts;

- (id)documentRoot;
- (void)stopAnimations;
- (void)pauseAnimations;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (void)tearDown;
- (void)didBecomeCurrent;
- (BOOL)shouldSuppressBackgrounds;
- (BOOL)isCanvasDrawingIntoPDF:(id)a0;
- (id)infoToConnectToForConnectionLineConnectedToInfo:(id)a0;
- (BOOL)shouldShowInstructionalTextForLayout:(id)a0;
- (void)p_addAmbientBuildRenderer:(id)a0;
- (id)newSlideTextureForEvent:(unsigned long long)a0;
- (void)waitUntilAsyncRenderingIsCompleteShouldCancel:(BOOL)a0;
- (void)generateTextures;
- (void)renderTextures;
- (BOOL)isMotionBlurEnabledWithEvent:(unsigned long long)a0;
- (id)textureSetForRep:(id)a0 description:(id)a1 shouldRender:(BOOL)a2;
- (id)nonCachedTextureSetForRep:(id)a0 description:(id)a1 shouldRender:(BOOL)a2;
- (void)resumeAnimationsIfPaused;
- (void)prepareAnimations;
- (void)renderIntoContext:(struct CGContext { } *)a0 eventIndex:(unsigned long long)a1 ignoreBuildVisibility:(BOOL)a2;
- (void)setTexture:(id)a0 forRep:(id)a1 forDescription:(id)a2;
- (void)registerForAmbientBuildStartCallback:(SEL)a0 target:(id)a1;
- (void)interruptAndReset;
- (void)p_setupTransitionStartTime;
- (void)p_setMotionBlurStatus;
- (void)tearDownTransition;
- (void)p_recursivelyRemoveCallbackObserversFromAnimatedBuilds:(id)a0;
- (BOOL)isRenderingForKPF;
- (void)p_notifyEventImmediateEndWithObject:(id)a0;
- (void)p_notifyEventEndWithObject:(id)a0;
- (void)p_notifyAmbientBuildStartWithObject:(id)a0;
- (void)p_animateBuild:(id)a0 afterDelay:(double)a1;
- (void)buildHasFinishedAnimating:(id)a0;
- (void)p_notifyAmbientBuildEndWithObject:(id)a0;
- (void)p_removeAmbientBuildRenderer:(id)a0;
- (BOOL)p_shouldSkipActionBuild:(id)a0 onDrawable:(id)a1;
- (void)removeActiveAnimatedBuild:(id)a0;
- (void)triggerNextEvent;
- (BOOL)hasTransitionAtEventIndex:(long long)a0;
- (id)infosVisibleAtEvent:(unsigned long long)a0 ignoreBuildVisibility:(BOOL)a1;
- (id)p_repsForInfos:(id)a0;
- (id)p_addParentLayerForInfo:(id)a0;
- (id)p_initializeTextureSetForRep:(id)a0 info:(id)a1 eventIndex:(unsigned long long)a2 ignoreBuildVisibility:(BOOL)a3 isRenderingToContext:(BOOL)a4;
- (void)p_renderCurrentEvent;
- (void)p_renderSlideContentWithMetal;
- (void)p_renderSlideContentWithCALayers;
- (void)p_addInfoToLayerTree:(id)a0 rep:(id)a1 renderer:(id)a2 builtInfos:(id)a3;
- (void)triggerNextEventIgnoringDelay:(BOOL)a0;
- (void)p_animateCurrentEventIgnoringDelays:(BOOL)a0;
- (double)p_minimumDelay;
- (void)transitionHasFinishedAnimating:(id)a0;
- (void)p_notifyEventStart;
- (void)p_animateTransition:(id)a0;
- (void)p_performAnimationWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2 delay:(double)a3 performAsynchronously:(BOOL)a4;
- (void)resetAmbientBuildTextures;
- (void)p_stopAllAmbientBuildRenderers;
- (void)clearActiveAnimatedBuilds;
- (void)p_clearAmbientBuildRenderers;
- (void)p_evictCacheAmbientBuildTexturesForTransition:(id)a0;
- (void)p_notifyEventAnimationActiveWithObject:(id)a0;
- (void)p_ambientBuildEnded:(id)a0;
- (id)p_textureSetForRep:(id)a0 shouldRender:(BOOL)a1;
- (void)p_ambientBuildStarted:(id)a0;
- (void)p_animateBuild:(id)a0;
- (void)addActiveAnimatedBuild:(id)a0;
- (void)p_animateBuild:(id)a0 isAmbientBuild:(BOOL)a1;
- (BOOL)isInfoAKeynoteMasterObject:(id)a0;
- (BOOL)hasNewRenderingForTimingInfo:(struct { double x0; double x1; double x2; })a0;
- (void)renderWithContext:(id)a0;
- (id)initForSlideNode:(id)a0 session:(id)a1;
- (void)registerForEventStartCallback:(SEL)a0 target:(id)a1;
- (void)registerForEventAnimationActiveCallback:(SEL)a0 target:(id)a1;
- (void)registerForEventEndCallback:(SEL)a0 target:(id)a1;
- (void)registerForEventImmediateEndCallback:(SEL)a0 target:(id)a1;
- (void)registerForAmbientBuildEndCallback:(SEL)a0 target:(id)a1;
- (void)transitionHasImmediatelyFinishedAnimating:(id)a0;
- (void)renderCurrentEvent;
- (void)p_setupSlideMetalRendererShouldReset:(BOOL)a0;
- (BOOL)playAutomaticEvents;
- (BOOL)isAtFirstEvent;
- (id)mediaControllerForInfo:(id)a0;
- (id)movieControllerForInfo:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectOnCanvasForInfo:(id)a0;
- (id)textureSetForInfo:(id)a0 eventIndex:(unsigned long long)a1 ignoreBuildVisibility:(BOOL)a2;
- (void)prepareAsLiveTextureSource;
- (void)serializeTextures;
- (void)evictInactiveRenderers;

@end
