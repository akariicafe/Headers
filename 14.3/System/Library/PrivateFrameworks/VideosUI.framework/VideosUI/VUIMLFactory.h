@interface VUIMLFactory : NSObject

+ (id)sharedInstance;
+ (void)_registerElements;
+ (void)_registerStyles;
+ (void)_registerStylesheets;
+ (void)_registerIOStyleSheets;
+ (id)_urlForStyleSheetName:(id)a0;

- (id)init;
- (id)imageForResource:(id)a0;
- (id)URLForResource:(id)a0;
- (id)_URLForResource:(id)a0 inBundle:(id)a1;
- (id)_styleSheetURLForTemplate:(id)a0;
- (id)viewForElement:(id)a0 existingView:(id)a1;
- (id)viewControllerForElement:(id)a0 existingViewController:(id)a1;
- (Class)collectionViewCellClassForElement:(id)a0;
- (id)imageProxyForElement:(id)a0 withLayout:(id)a1;
- (void)parseAppConfigurationForElement:(id)a0;
- (id)styleSheetURLForTemplate:(id)a0;
- (id)navigationControllerForTabIdentifier:(id)a0;

@end
