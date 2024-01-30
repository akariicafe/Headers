@class UIViewController, VUIVideosPlayable, VUIExtrasInfo, NSObject, VUIMediaEntity;
@protocol TVPMediaItem;

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
@property (retain, nonatomic) UIViewController *presentingController;

+ (id)defaultPreflightManager;

- (id)_ratingValue;
- (void).cxx_destruct;
- (id)init;
- (void)preflightWithOptions:(long long)a0 completion:(id /* block */)a1;
- (void)_preflightWithOptions:(long long)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (void)_performRestrictionsCheckWithCompletion:(id /* block */)a0;
- (void)_performAgeGateVerificationWithCompletion:(id /* block */)a0;
- (void)_preflightDownloadWithCompletion:(id /* block */)a0;
- (BOOL)_isAllowedToPlayOrPurchase;
- (id)_ratingDomain;
- (void)_showRestrictionsAlertForRatingDomain:(id)a0 completion:(id /* block */)a1;
- (BOOL)_isTrailer;
- (BOOL)_shouldShowAgeConfirmationAlert;
- (long long)_requiredAgeForPlayback;
- (void)_setLastAgeConfirmationPrompted:(id)a0;
- (void)_setLastConfirmedAge:(long long)a0;
- (void)_showAgeConfirmationWithPresentingViewController:(id)a0 completion:(id /* block */)a1;
- (long long)_lastConfirmedAge;
- (id)_lastAgeConfirmationPrompted;

@end
