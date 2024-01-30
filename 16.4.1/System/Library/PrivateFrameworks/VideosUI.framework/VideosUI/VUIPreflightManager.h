@class VUIVideosPlayable, VUIExtrasInfo, NSObject, VUIMediaEntity;
@protocol VUIControllerPresenter, TVPMediaItem;

@interface VUIPreflightManager : NSObject

@property (copy, nonatomic) id /* block */ savedRestrictionsCompletion;
@property (nonatomic) long long restrictionsState;
@property (retain, nonatomic) id restrictionsValidationToken;
@property (retain, nonatomic) VUIVideosPlayable *videosPlayable;
@property (retain, nonatomic) NSObject<TVPMediaItem> *mediaItem;
@property (retain, nonatomic) VUIMediaEntity *mediaEntity;
@property (retain, nonatomic) VUIExtrasInfo *extrasInfo;
@property (nonatomic) BOOL contentAllowsCellularDownload;
@property (nonatomic) unsigned long long restrictionsCheckType;
@property (retain, nonatomic) NSObject<VUIControllerPresenter> *presentingController;

+ (id)defaultPreflightManager;

- (id)init;
- (void).cxx_destruct;
- (id)_ratingValue;
- (BOOL)_shouldShowAgeConfirmationAlert;
- (BOOL)_isAllowedToPlayOrPurchase;
- (BOOL)_isTrailer;
- (id)_lastAgeConfirmationPrompted;
- (long long)_lastConfirmedAge;
- (void)_logRatingsInfo:(id)a0 maxAllowedRank:(id)a1 ratingValue:(id)a2;
- (void)_performAgeGateVerificationWithCompletion:(id /* block */)a0;
- (void)_performRestrictionsCheckWithCompletion:(id /* block */)a0;
- (void)_preflightDownloadWithCompletion:(id /* block */)a0;
- (void)_preflightWithOptions:(long long)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (id)_ratingDomain;
- (long long)_requiredAgeForPlayback;
- (void)_setLastAgeConfirmationPrompted:(id)a0;
- (void)_setLastConfirmedAge:(long long)a0;
- (void)_showAgeConfirmationWithPresentingViewController:(id)a0 completion:(id /* block */)a1;
- (void)_showRestrictionsAlertForRatingDomain:(id)a0 completion:(id /* block */)a1;
- (void)preflightWithOptions:(long long)a0 completion:(id /* block */)a1;

@end
