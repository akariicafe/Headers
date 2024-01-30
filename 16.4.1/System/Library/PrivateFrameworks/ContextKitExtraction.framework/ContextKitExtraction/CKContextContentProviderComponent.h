@class UIView;

@interface CKContextContentProviderComponent : CKContextContentProvider

@property (weak, nonatomic, setter=setView:) UIView *view;

+ (void)initialize;
+ (id)_bestVisibleStringForView:(id)a0 usingExecutor:(id)a1;
+ (id)_handleWKWebView:(id)a0 withExecutor:(id)a1;
+ (BOOL)_isSensitiveTextContentType:(id)a0;
+ (double)_fontSizeOfView:(id)a0 usingExecutor:(id)a1;
+ (id)_getNotableSuperviewClassNamesForView:(id)a0;
+ (id)_UIElementsForWebViewContentString:(id)a0 withSceneIdentifier:(id)a1;
+ (id)_decendantsRelevantForExtractionFromParentView:(id)a0;
+ (void)_donateContentsOfParentView:(id)a0 usingExecutor:(id)a1 withOptions:(unsigned long long)a2;
+ (void)_donateText:(id)a0 withTitle:(id)a1 debugText:(id)a2 debugUrlString:(id)a3 leadImage:(id)a4 snapshot:(id)a5 uiElements:(id)a6 usingContextFromExecutor:(id)a7;
+ (void)_extractContentFromWebView:(id)a0 includingUIBoundingBox:(BOOL)a1 withCompletionHandler:(id /* block */)a2;

- (void)extractUsingExecutor:(id)a0 withOptions:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;

@end
