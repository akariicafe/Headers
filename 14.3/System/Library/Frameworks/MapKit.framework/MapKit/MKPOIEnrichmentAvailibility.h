@interface MKPOIEnrichmentAvailibility : NSObject

+ (BOOL)_isMapsApplication;
+ (BOOL)shouldShowCallToActionForMapItem:(id)a0;
+ (BOOL)_shouldAllowUserToAddContributionsForMapItem:(id)a0;
+ (BOOL)shouldShowAddPhotoButtonsOnPhotoGalleryForMapItem:(id)a0;
+ (BOOL)shouldShowAddPhotoButtonsOnSlideshowGalleryForMapItem:(id)a0 options:(unsigned long long)a1;
+ (BOOL)shouldShowRatingInfoCallToActionOnPlaceCardHeaderForMapItem:(id)a0;
+ (BOOL)shouldShowReportAnIssueOnPhotoGalleryForMapItem:(id)a0;
+ (BOOL)shouldShowInformedConsentFooterActionForMapItem:(id)a0 options:(unsigned long long)a1;
+ (BOOL)shouldShowMorePhotosGalleryForMapItem:(id)a0;
+ (BOOL)shouldShowCallToActionForMapItem:(id)a0 options:(unsigned long long)a1;
+ (BOOL)shouldShowAppleRatingsForMapItem:(id)a0;

@end
