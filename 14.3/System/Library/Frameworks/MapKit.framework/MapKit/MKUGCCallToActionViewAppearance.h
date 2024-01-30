@class NSString, NSAttributedString;

@interface MKUGCCallToActionViewAppearance : NSObject {
    id /* block */ _ctaTextBlock;
}

@property (nonatomic) long long ratingState;
@property (nonatomic) unsigned long long numberOfPhotosAdded;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSAttributedString *callToActionText;
@property (readonly, nonatomic) NSString *leadingGlyphName;
@property (readonly, nonatomic) NSString *trailingGlyphName;

+ (id)passiveThumbsUpAppearanceForThirdPartyPlacecard;
+ (id)_photosCallToActionViewWithTextRefreshBlock:(id /* block */)a0 hasPhotoLibraryEmphasis:(BOOL)a1;
+ (id)_editSubmissionCallToActionViewWithTextRefreshBlock:(id /* block */)a0;
+ (id)_ratingsCallToActionViewWithTextRefreshBlock:(id /* block */)a0;
+ (id)activeThumbsUpAppearanceForThirdPartyPlacecard;
+ (id)activeAddPhotosAppearanceForThirdPartyPlacecardWithNumberOfPhotos:(unsigned long long)a0;
+ (id)userRecommendedAppearanceForRatingState:(long long)a0 numberOfPhotosAdded:(unsigned long long)a1;
+ (id)userRecommendedFailureAppearance;
+ (id)userRecommendedLoadingAppearance;
+ (id)headerAppearanceForFirstPartyPlacecardWithMapItem:(id)a0;
+ (id)passiveAddPhotosAppearanceForThirdPartyPlacecard;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 callToActionTextRefreshBlock:(id /* block */)a1;
- (id)initWithType:(long long)a0 callToActionTextRefreshBlock:(id /* block */)a1 leadingGlpyhName:(id)a2;
- (id)initWithType:(long long)a0 callToActionTextRefreshBlock:(id /* block */)a1 leadingGlpyhName:(id)a2 trailingGlyphName:(id)a3;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
