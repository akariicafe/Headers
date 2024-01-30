@interface VideosUI.UIFactory : NSObject <VUIDocumentCreator, _TVInterfaceCreatingPrivate>

- (id)imageForResource:(id)a0;
- (id)URLForResource:(id)a0;
- (id)playbackContainerViewController;
- (id)_viewForIKElement:(id)a0 existingView:(id)a1;
- (id)_imageProxyForIKElement:(id)a0 withLayout:(id)a1;
- (id)_viewControllerForIKElement:(id)a0 existingViewController:(id)a1;
- (id)createMultiPlayerViewControllerWithPlayerViewControllers:(id)a0 showingDetails:(BOOL)a1;
- (BOOL)isDocumentViewController:(id)a0 equalToViewController:(id)a1;
- (void)recordImpressionsForViewController:(id)a0;
- (id)rootSplitViewController;
- (void)scrollViewControllerToTop:(id)a0;
- (id)viewControllerWithDocumentDataSource:(id)a0 appContext:(id)a1 documentOptions:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
