@class MKMapItem;

@interface MUPlaceDataAvailability : NSObject {
    MKMapItem *_mapItem;
    unsigned long long _placeCardOptions;
}

@property (readonly, nonatomic) BOOL supportsPhotoSlider;
@property (readonly, nonatomic) BOOL supportsAmenities;
@property (readonly, nonatomic) BOOL supportsRelatedPlaces;
@property (readonly, nonatomic) BOOL supportsBusinessChat;
@property (readonly, nonatomic) BOOL supportsHeaderContainment;
@property (readonly, nonatomic) BOOL suportsOfficialApp;
@property (readonly, nonatomic) BOOL supportsHours;
@property (readonly, nonatomic) BOOL supportsCuratedGuidesCarousel;
@property (readonly, nonatomic) BOOL supportsEncyclopedicDescription;
@property (readonly, nonatomic) BOOL supportsWebContent;
@property (readonly, nonatomic) BOOL supportsVenueTextInfo;
@property (readonly, nonatomic) BOOL supportsAnnotatedPhotos;
@property (readonly, nonatomic) BOOL supportsAnnotatedTextList;
@property (readonly, nonatomic) BOOL shouldShowRatingsAndReviewsModule;
@property (readonly, nonatomic) BOOL supportsBrowseCategory;
@property (readonly, nonatomic) BOOL supportsPlaceAttribution;
@property (readonly, nonatomic) BOOL supportsInlineMap;
@property (readonly, nonatomic) BOOL supportsInlinePOIMap;
@property (readonly, nonatomic) BOOL isTransitItem;
@property (readonly, nonatomic) BOOL allowTransitLineSelection;
@property (readonly, nonatomic) BOOL hasRatingsOrReviews;
@property (readonly, nonatomic) BOOL supportsReportAnIssue;
@property (readonly, nonatomic) BOOL supportsInlineReportAnIssue;
@property (readonly, nonatomic) BOOL supportsReportsInReview;
@property (readonly, nonatomic) BOOL supportsShowingCoordinates;
@property (readonly, nonatomic) BOOL supportsMessageHours;
@property (readonly, nonatomic) BOOL supportsPlaceDescription;
@property (readonly, nonatomic) BOOL supportsCallToAction;
@property (readonly, nonatomic) BOOL supportsAddingPhotos;
@property (readonly, nonatomic) BOOL supportsPhotoOnlyDataCollection;
@property (readonly, nonatomic) BOOL showEditAddressForHome;
@property (readonly, nonatomic) BOOL supportsPlaceEnrichment;
@property (readonly, nonatomic) BOOL canShowDirections;
@property (readonly, nonatomic) BOOL supportsInlineRatings;
@property (readonly, nonatomic) BOOL supportsSharing;

- (void).cxx_destruct;
- (id)initWithMapItem:(id)a0 options:(unsigned long long)a1;
- (BOOL)_hasAppleRatingsCategories;

@end
