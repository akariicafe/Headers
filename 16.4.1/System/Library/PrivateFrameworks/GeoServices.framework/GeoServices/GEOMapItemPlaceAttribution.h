@class NSArray, NSURL;

@interface GEOMapItemPlaceAttribution : GEOMapItemAttribution

@property (readonly, nonatomic) NSArray *checkInURLs;
@property (readonly, nonatomic) NSURL *webURL;

- (id)initWithSearchAttributionInfo:(id)a0 attributionURLs:(id)a1 poiID:(id)a2;

@end
