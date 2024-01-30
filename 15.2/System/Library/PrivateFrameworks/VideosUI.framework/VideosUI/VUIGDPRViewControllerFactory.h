@interface VUIGDPRViewControllerFactory : NSObject

+ (id)_features;
+ (id)_chinaController;
+ (id)_libraryOnlyController;
+ (id)_whatsNewController;
+ (id)_defaultController;
+ (id)_whatsNewFeatures;
+ (id)_appImage;
+ (id)_tintedAppleTVPlusImage;
+ (id)_tintedVUIGlyphNamed:(id)a0;
+ (id)_disclaimerFeature;
+ (id)_tintedSymbolNamed:(id)a0;
+ (void)createViewController:(BOOL)a0 completion:(id /* block */)a1;

@end
