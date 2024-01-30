@class NSCache, geo_isolater, GEOPublisherAttributionManifestIndex;

@interface GEOCollectionPublisherAttributionManager : NSObject {
    NSCache *_manifestsCache;
    geo_isolater *_isolator;
    GEOPublisherAttributionManifestIndex *_index;
}

+ (id)sharedInstance;

- (id)bestAttributionForPublisher:(id)a0;
- (id)bestAttributionForPublisher:(id)a0 preferredLanguages:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
