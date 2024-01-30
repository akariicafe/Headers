@class GEOTileLoader;

@interface GEOMapFeatureTransitLinkFinder : GEOMapFeatureAccessFinder {
    GEOTileLoader *_tileLoader;
}

- (void).cxx_destruct;
- (id)findTransitLinksNear:(struct { double x0; double x1; })a0 radius:(double)a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)initWithTileLoader:(id)a0;

@end
