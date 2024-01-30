@class NSArray, GEOMapItemPhotosAttribution;

@interface _MKMapItemPhotosAttribution : _MKMapItemAttribution {
    GEOMapItemPhotosAttribution *_geoPhotosAttribution;
}

@property (readonly, nonatomic) NSArray *addPhotoURLs;
@property (readonly, nonatomic) BOOL shouldSuppressPhotoAttribution;
@property (readonly, nonatomic) BOOL shouldHandlePhotosLocally;
@property (readonly, nonatomic) BOOL shouldAddPhotosLocally;
@property (readonly, nonatomic) BOOL supportsReportingIssue;

- (void).cxx_destruct;
- (id)initWithGEOMapItemAttribution:(id)a0;
- (id)urlsForPhotoWithIdentifier:(id)a0;

@end
