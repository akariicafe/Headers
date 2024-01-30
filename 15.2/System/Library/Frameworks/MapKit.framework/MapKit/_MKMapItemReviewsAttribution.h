@class NSArray, GEOMapItemReviewsAttribution;

@interface _MKMapItemReviewsAttribution : _MKMapItemAttribution {
    GEOMapItemReviewsAttribution *_geoReviewsAttribution;
}

@property (readonly, nonatomic) NSArray *addReviewURLs;

- (id)initWithGEOMapItemAttribution:(id)a0;
- (void).cxx_destruct;
- (BOOL)isUserSubmitted;
- (id)urlsForSelectedItemWithItems:(id)a0;
- (id)urlsForReview:(id)a0;

@end
