@class NSString, GEOMapFeatureTileFinder;

@interface _GEOMapFeatureTileFinderRequest : NSObject <GEOMapFeatureAccessRequest> {
    GEOMapFeatureTileFinder *_tileFinder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTileFinder:(id)a0;
- (void).cxx_destruct;
- (void)cancel;

@end
