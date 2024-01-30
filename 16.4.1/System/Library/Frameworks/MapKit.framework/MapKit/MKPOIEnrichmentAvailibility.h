@interface MKPOIEnrichmentAvailibility : NSObject

+ (BOOL)_isMapsApplication;
+ (BOOL)_shouldAllowUserToAddContributionsForMapItem:(id)a0;
+ (BOOL)shouldShowAddPhotoButtonOnEndOfPhotoSliderForMapItem:(id)a0;
+ (BOOL)shouldShowAddPhotoButtonOnMorePhotosGalleryForMapItem:(id)a0 usingAttributionsByProviderIds:(id)a1;
+ (BOOL)shouldShowAddPhotoButtonsOnSingleFullScreenPhotoViewerForMapItem:(id)a0 photoAttribution:(id)a1;
+ (BOOL)shouldShowAppleRatingsForMapItem:(id)a0;
+ (BOOL)shouldShowCallToActionForMapItem:(id)a0;
+ (BOOL)shouldShowCallToActionForMapItem:(id)a0 options:(unsigned long long)a1;
+ (BOOL)shouldShowMorePhotosGalleryForMapItem:(id)a0;
+ (BOOL)shouldShowPhotosCallToActionForMapItem:(id)a0;
+ (BOOL)shouldShowRatingInfoCallToActionOnPlaceCardHeaderForMapItem:(id)a0;
+ (BOOL)shouldShowRatingsCallToActionForMapItem:(id)a0;
+ (BOOL)shouldShowReportAnIssueOnPhotoGalleryForMapItem:(id)a0 photoAttribution:(id)a1;

@end
