@class NSArray;

@interface GEOMapItemPhotosAttribution : GEOMapItemAttribution

@property (readonly, nonatomic) NSArray *addPhotoURLs;
@property (readonly, nonatomic) BOOL canAddPhotosLocally;
@property (readonly, nonatomic) BOOL canShowPhotosLocally;
@property (readonly, nonatomic) BOOL shouldSuppressPhotoAttribution;
@property (readonly, nonatomic) BOOL supportsReportingIssue;
@property (readonly, nonatomic) BOOL requiresAttributionInPhotoViewerHeader;

- (id)initWithSearchAttributionInfo:(id)a0 attributionURLs:(id)a1 poiID:(id)a2;
- (id)initWithSearchAttributionInfo:(id)a0 attributionURLs:(id)a1 yelpID:(id)a2;
- (id)urlsForPhotoWithIdentifier:(id)a0;

@end
