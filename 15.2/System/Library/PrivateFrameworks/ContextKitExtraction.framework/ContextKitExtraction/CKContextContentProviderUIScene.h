@class UIScene, NSString, NSTimer, UIButton;

@interface CKContextContentProviderUIScene : CKContextContentProvider <_UISceneComponentProviding> {
    UIButton *_debugButton;
    UIButton *_recentsButton;
    BOOL _allowAppSwitcherControls;
    NSTimer *_toolInstallationTimer;
}

@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)_bestTitleFromWindow:(id)a0 usingExecutor:(id)a1;
+ (void)_extractContentFromWebViewPDFData:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (double)_fontSizeOfView:(id)a0 usingExecutor:(id)a1;
+ (id)_bestContentStringForWebViewUIElements:(id)a0 andTitle:(id)a1;
+ (void)extractFromScene:(id)a0 usingExecutor:(id)a1 withOptions:(unsigned long long)a2;
+ (id)_getNotableSuperviewClassNamesForView:(id)a0;
+ (unsigned char)_controlCodeForExecutor:(id)a0;
+ (void)_descendantsRelevantForContentExtractionFromView:(id)a0 intoArray:(id)a1;
+ (void)_donateContentsOfWindow:(id)a0 usingExecutor:(id)a1 withOptions:(unsigned long long)a2;
+ (id)_blocksFromText:(id)a0;
+ (id)_bestImageForView:(id)a0;
+ (BOOL)_isRelevantForExtractionWithView:(id)a0;
+ (void)_donateText:(id)a0 withTitle:(id)a1 withDebugText:(id)a2 debugUrlString:(id)a3 withLeadImage:(id)a4 withSnapshot:(id)a5 withUIElements:(id)a6 usingContextFromExecutor:(id)a7;
+ (id)_UIElementsForWebViewContentString:(id)a0;
+ (id)_handleWKWebView:(id)a0 withExecutor:(id)a1;
+ (id)_handlePDFView:(id)a0 withExecutor:(id)a1;
+ (id)_bestVisibleStringForView:(id)a0 usingExecutor:(id)a1;
+ (BOOL)_isSensitiveTextContentType:(id)a0;
+ (id)_descendantsRelevantForContentExtractionFromWindow:(id)a0;
+ (BOOL)_textBlockLooksLikeAListWithText:(id)a0;
+ (void)_extractContentFromWebView:(id)a0 includingSnapshot:(BOOL)a1 includingUIBoundingBox:(BOOL)a2 withCompletionHandler:(id /* block */)a3;

- (void)_sceneWillInvalidate:(id)a0;
- (id)initWithScene:(id)a0;
- (void)_installDebuggingControlsIfApplicable;
- (void)_didSelectDebugControl:(id)a0;
- (void)_setUpDebuggingControlsIfPossibleAfterDelay:(double)a0;
- (id)_containerViewForDebugButtons;
- (void)extractUsingExecutor:(id)a0 withOptions:(unsigned long long)a1;
- (void)_installRecentsButton;
- (void).cxx_destruct;
- (void)_didSelectRecentsControl:(id)a0;
- (BOOL)_shouldInstallAppSwitcherControls;
- (id)_descendantsRelevantForDebugControls:(id)a0;
- (void)_installDebuggingButton;
- (BOOL)_determineIfDebuggingControlsShouldBeAllowed;

@end
