@class UIViewController, VUIVideosPlayable, NSObject;
@protocol TVPMediaItem;

@interface VUIPreflightManager : NSObject

@property (retain, nonatomic) VUIVideosPlayable *videosPlayable;
@property (retain, nonatomic) NSObject<TVPMediaItem> *mediaItem;
@property (nonatomic) BOOL contentAllowsCellularDownload;
@property (nonatomic) unsigned long long restrictionsCheckType;
@property (retain, nonatomic) UIViewController *presentingController;

+ (id)defaultPreflightManager;

- (id)init;
- (void).cxx_destruct;
- (id)_ratingValue;
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
