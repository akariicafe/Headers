@interface VUIGDPRViewControllerFactory : NSObject

+ (id)_features;
+ (void)createViewController:(BOOL)a0 completion:(id /* block */)a1;
+ (id)_chinaController;
+ (id)_libraryOnlyController;
+ (id)_whatsNewController;
+ (id)_defaultController;
+ (id)_whatsNewFeatures;
+ (id)_appImage;
+ (id)_tintedVUIGlyphNamed:(id)a0;
+ (id)_disclaimerFeature;

@end
