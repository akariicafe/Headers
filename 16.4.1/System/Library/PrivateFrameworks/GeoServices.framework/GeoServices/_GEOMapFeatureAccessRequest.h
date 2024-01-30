@class NSString, GEOTileLoader, NSMutableArray, geo_isolater;

@interface _GEOMapFeatureAccessRequest : NSObject <GEOMapFeatureAccessRequest> {
    NSMutableArray *_clientIdentifiers;
    geo_isolater *_clientIdentifiersIsolater;
}

@property (readonly, nonatomic) GEOTileLoader *tileLoader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
