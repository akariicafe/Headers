@interface VideosUI.UIFactory : NSObject <VUIDocumentCreator, _TVInterfaceCreatingPrivate>

- (id)imageForResource:(id)a0;
- (id)URLForResource:(id)a0;
- (id)viewControllerWithDocumentDataSource:(id)a0 appContext:(id)a1 viewElement:(id)a2 documentOptions:(id)a3;
- (BOOL)isDocumentViewController:(id)a0 equalToViewController:(id)a1;
- (id)_styleSheetURLForTemplate:(id)a0;
- (id)_viewForIKElement:(id)a0 existingView:(id)a1;
- (id)_viewControllerForIKElement:(id)a0 existingViewController:(id)a1;
- (Class)_collectionViewCellClassForIKElement:(id)a0;
- (void)_parseAppConfigurationForIKElement:(id)a0;
- (id)_imageProxyForIKElement:(id)a0 withLayout:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
