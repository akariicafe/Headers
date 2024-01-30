@interface SSScreenshotMetadataHarvester : NSObject

+ (void)harvestScreenshotMetadataAndRespondToAction:(id)a0;
+ (void)_crawlViewController:(id)a0 executingBlock:(id /* block */)a1;
+ (void)_crawlView:(id)a0 executingBlock:(id /* block */)a1;
+ (id)_screenshotServiceForWindowScene:(id)a0 wantsPrivateDelegate:(BOOL)a1;
+ (id)_applicationScreenshotServiceWithPrivateDelegate:(BOOL)a0;
+ (id)screenshotServiceWithIdentifier:(id)a0;
+ (id)_screenshotServicesDelegateWithIdentifier:(id)a0;
+ (id)_contentRectsForMetadata;
+ (BOOL)canGenerateDocumentForIdentifier:(id)a0;
+ (void)sendResponseForAction:(id)a0 withObject:(id)a1 forKey:(unsigned long long)a2;
+ (void)_grabUserActivityTitleWithCallback:(id /* block */)a0;
+ (void)_grabPDFRepresentationForIdentifier:(id)a0 withCallback:(id /* block */)a1;

@end
