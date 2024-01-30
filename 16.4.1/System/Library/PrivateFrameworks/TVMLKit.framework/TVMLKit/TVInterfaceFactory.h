@class TVStyleSheetRegistry, NSString, NSMutableDictionary, _TVLockupFactory, _TVTemplateFactory, _TVControllerFactory, TVMLViewFactory;
@protocol TVInterfaceCreating;

@interface TVInterfaceFactory : NSObject <TVInterfaceCreating> {
    struct { unsigned char respondsToViewForElement : 1; unsigned char respondsToViewControllerForElement : 1; unsigned char respondsToURLForResource : 1; unsigned char respondsToImageForResource : 1; unsigned char respondsToCollectionViewCellClassForElement : 1; unsigned char respondsToPlayerViewControllerForPlayer : 1; unsigned char respondsToViewForIKElement : 1; unsigned char respondsToViewControllerForIKElement : 1; unsigned char respondsToCollectionViewCellClassForIKElement : 1; unsigned char respondsToParseAppConfigutaionForElement : 1; unsigned char respondsToParseAppConfigutaionForIKElement : 1; unsigned char respondsToImageProxyForIKElement : 1; unsigned char respondsToImageProxyForElement : 1; unsigned char respondsToStyleSheetURLForTemplate : 1; unsigned char respondsToNavigationControllerForTabIdentifier : 1; } _extenderFlags;
    NSMutableDictionary *_viewCreatorsByKey;
    NSMutableDictionary *_viewControllerCreatorsByKey;
    NSMutableDictionary *_controllerTransitionCreatorsByKey;
    TVMLViewFactory *_viewFactory;
    _TVLockupFactory *_lockupFactory;
    _TVControllerFactory *_controllerFactory;
    _TVTemplateFactory *_templateFactory;
}

@property (readonly, nonatomic) TVStyleSheetRegistry *styleSheetRegistry;
@property (retain, nonatomic) id<TVInterfaceCreating> extendedInterfaceCreator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedInterfaceFactory;
+ (id)_URLForResource:(id)a0 bundle:(id)a1;
+ (id)_tvmlResourceMap;

- (void)setup;
- (void)dealloc;
- (id)imageForResource:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)URLForResource:(id)a0;
- (id)_getImageFromURLorBundle:(id)a0;
- (id)_navigationControllerForTabIdentifier:(id)a0;
- (id)_resourceImageNamed:(id)a0;
- (id)_styleSheetURLForTemplate:(id)a0;
- (Class)collectionViewCellClassForElement:(id)a0;
- (id)playerViewControllerForPlayer:(id)a0;
- (id)viewControllerForElement:(id)a0 existingViewController:(id)a1;
- (id)viewForElement:(id)a0 existingView:(id)a1;
- (Class)_collectionViewCellClassForElement:(id)a0;
- (id)_controllerTransitionFromElement:(id)a0 toElement:(id)a1 forNavigationControllerOperation:(long long)a2 relativeToFrom:(BOOL)a3;
- (void)_darkerSystemColorStatusChanged:(id)a0;
- (Class)_extendedCollectionViewCellClassForIKElement:(id)a0;
- (id)_imageProxyForResourceURL:(id)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1;
- (id)_imageProxyForSymbolURL:(id)a0 imageSymbolConfiguration:(id)a1 scaleToSize:(struct CGSize { double x0; double x1; })a2;
- (id)_imageProxyFromElement:(id)a0;
- (id)_imageProxyFromElement:(id)a0 withLayout:(id)a1;
- (void)_registerControllerTransitioningCreator:(id /* block */)a0 withType:(unsigned long long)a1;
- (void)_registerProductTemplateURL:(id)a0 forTemplateName:(id)a1 includeParentStyleSheets:(BOOL)a2;
- (void)_registerViewControllerCreator:(id /* block */)a0 withType:(unsigned long long)a1;
- (void)_registerViewControllerCreatorEx:(id /* block */)a0 withType:(unsigned long long)a1;
- (void)_registerViewCreator:(id /* block */)a0 withType:(unsigned long long)a1;
- (void)_registerViewCreatorEx:(id /* block */)a0 withType:(unsigned long long)a1;
- (id)_viewControllerFromElement:(id)a0 existingController:(id)a1;
- (id)_viewControllerFromElement:(id)a0 layout:(id)a1 existingController:(id)a2;
- (id)_viewFromElement:(id)a0 existingView:(id)a1;
- (id)_viewFromElement:(id)a0 layout:(id)a1 existingView:(id)a2;
- (void)_willParseAppDocument:(id)a0 forImplicitUpdates:(BOOL)a1;

@end
