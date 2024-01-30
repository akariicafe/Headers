@class UIScene, NSString, NSTimer, UIButton;

@interface CKContextContentProviderUIScene : CKContextContentProvider <_UISceneComponentProviding> {
    UIButton *_debugButton;
    BOOL _allowDebugControls;
    NSTimer *_toolInstallationTimer;
}

@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)_isRelevantForExtractionWithView:(id)a0;
+ (void)extractFromScene:(id)a0 usingExecutor:(id)a1;
+ (id)_bestContentStringForWebViewContentString:(id)a0 andTitle:(id)a1;
+ (void)_donateText:(id)a0 withDebugText:(id)a1 debugUrlString:(id)a2 usingContextFromExecutor:(id)a3;
+ (id)_bestVisibleStringForView:(id)a0 usingExecutor:(id)a1;
+ (BOOL)_textBlockLooksLikeAListWithText:(id)a0;
+ (id)_handleWKWebView:(id)a0 withExecutor:(id)a1;
+ (void)_donateContentsOfWindow:(id)a0 usingExecutor:(id)a1;
+ (id)_blocksFromText:(id)a0;
+ (BOOL)_isSensitiveTextContentType:(id)a0;
+ (id)_handlePDFView:(id)a0 withExecutor:(id)a1;
+ (id)_descendantsRelevantForContentExtractionFromView:(id)a0;
+ (unsigned char)_controlCodeForExecutor:(id)a0;

- (void)_didSelectDebugControl:(id)a0;
- (void).cxx_destruct;
- (id)_descendantsRelevantForDebugControls:(id)a0;
- (void)_installDebuggingButton;
- (id)initWithScene:(id)a0;
- (void)_setUpDebuggingControlsIfPossibleAfterDelay:(double)a0;
- (void)_sceneWillInvalidate:(id)a0;
- (BOOL)_shouldInstallDebugControls;
- (id)_containerViewForDebugButton;
- (BOOL)_determineIfDebuggingControlsShouldBeAllowed;
- (void)_installDebuggingControlsIfApplicable;
- (void)extractUsingExecutor:(id)a0;

@end
