@class GEOSearchAttributionManifest;

@interface GEOSearchAttributionLoader : NSObject {
    GEOSearchAttributionManifest *_attributionManifest;
}

- (void)loadAttributionInfoForIdentifier:(id)a0 allowNetwork:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithAttributionManifest:(id)a0;

@end
