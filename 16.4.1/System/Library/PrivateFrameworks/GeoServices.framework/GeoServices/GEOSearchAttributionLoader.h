@class GEOSearchAttributionManifest;

@interface GEOSearchAttributionLoader : NSObject {
    GEOSearchAttributionManifest *_attributionManifest;
}

- (void).cxx_destruct;
- (id)initWithAttributionManifest:(id)a0;
- (void)loadAttributionInfoForIdentifier:(id)a0 allowNetwork:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
