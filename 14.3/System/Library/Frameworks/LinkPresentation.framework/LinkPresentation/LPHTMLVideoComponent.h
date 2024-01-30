@class DOMDocument, NSString, WebScriptObject, LPVideo, DOMHTMLIFrameElement, DOMHTMLVideoElement, LPCSSResolver, DOMElement;

@interface LPHTMLVideoComponent : LPHTMLComponent <DOMEventListener> {
    LPVideo *_video;
    DOMElement *_playButton;
    DOMElement *_muteButton;
    DOMElement *_muteButtonContainer;
    DOMElement *_videoPosterFrame;
    DOMElement *_videoOverlay;
    DOMHTMLVideoElement *_videoElement;
    DOMHTMLIFrameElement *_youTubeContainerElement;
    BOOL _isVisible;
    BOOL _wasPlayingWhenHidden;
    WebScriptObject *_isVisibleFunction;
    LPCSSResolver *_CSSResolver;
    DOMDocument *_document;
}

@property (nonatomic, getter=isMuted) BOOL muted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)styleSet;
+ (id)ruleDictionaryForStyle:(id)a0;
+ (id)ruleDictionaryForStyleWithDarkInterface:(id)a0;
+ (id)additionalGlobalOutOfLineStyleDeclarations;

- (BOOL)isPlaying;
- (void)play;
- (void).cxx_destruct;
- (void)updateVisibility;
- (void)handleEvent:(id)a0;
- (BOOL)shouldAutoPlay;
- (BOOL)isVisible;
- (void)pause;
- (id)initWithVideo:(id)a0 style:(id)a1 posterFrame:(id)a2 posterFrameStyle:(id)a3 themePath:(id)a4 generator:(id)a5;
- (id)createVideoElement;
- (void)buildComponentWithPosterFrame:(id)a0 posterFrameStyle:(id)a1;
- (id)resolvedVideoElement;
- (id)youTubeParametersForVideoURL:(id)a0;
- (void)togglePlaying;

@end
