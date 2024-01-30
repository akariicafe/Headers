@interface MKPOIEnrichmentAvailibility : NSObject

+ (BOOL)shouldShowCallToActionForMapItem:(id)a0 options:(unsigned long long)a1;
+ (BOOL)shouldShowAppleRatingsForMapItem:(id)a0;
+ (BOOL)shouldShowMorePhotosGalleryForMapItem:(id)a0;
+ (BOOL)shouldShowCallToActionForMapItem:(id)a0;
+ (BOOL)_isMapsApplication;
+ (BOOL)_shouldAllowUserToAddContributionsForMapItem:(id)a0;
+ (BOOL)shouldShowRatingsCallToActionForMapItem:(id)a0;
+ (BOOL)shouldShowPhotosCallToActionForMapItem:(id)a0;
+ (BOOL)shouldShowAddPhotoButtonsOnPhotoGalleryForMapItem:(id)a0 photoAttribution:(id)a1;
+ (BOOL)shouldShowAddPhotoButtonsOnSlideshowGalleryForMapItem:(id)a0 photoAttribution:(id)a1 options:(unsigned long long)a2;
+ (BOOL)shouldShowRatingInfoCallToActionOnPlaceCardHeaderForMapItem:(id)a0;
+ (BOOL)shouldShowReportAnIssueOnPhotoGalleryForMapItem:(id)a0 photoAttribution:(id)a1;

@end
