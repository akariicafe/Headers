@interface PXTitleFontDiagnosticsService : PXDiagnosticsService

+ (id)diagnosticsDescriptionForAssetCollections:(id)a0;
+ (id)_statisticsDescriptionForAssetCollections:(id)a0 usingFontIndexBlock:(id /* block */)a1;

- (id)title;
- (BOOL)canProvideContextualViewController;
- (id)contextualViewController;

@end
