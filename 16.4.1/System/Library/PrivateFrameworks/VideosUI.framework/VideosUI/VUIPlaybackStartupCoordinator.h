@class NSString, NSDictionary, VUIVideosPlayable, VUIMediaInfo, TVPStateMachine;

@interface VUIPlaybackStartupCoordinator : NSObject

@property (retain, nonatomic) VUIMediaInfo *mediaInfo;
@property (nonatomic) long long watchType;
@property (nonatomic) BOOL isRentAndWatchNow;
@property (nonatomic) BOOL isCellularAllowed;
@property (nonatomic) BOOL forceDownloadToStream;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *adamID;
@property (copy, nonatomic) NSString *videoCanonicalID;
@property (copy, nonatomic) NSString *showCanonicalID;
@property (copy, nonatomic) NSString *mediaType;
@property (copy, nonatomic) NSDictionary *contentMetadata;
@property (retain, nonatomic) TVPStateMachine *stateMachine;
@property (retain, nonatomic) VUIVideosPlayable *resolvedPlayable;

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_addGroupActivityDayParamToPlayableAndMediaItem:(id)a0;
- (id)_addQueryParamsToSharedWatchURL:(id)a0 watchType:(long long)a1 groupActivityDay:(id)a2;
- (void)_checkIfAllowedToPlayOnCellularNetworkWithMediaItem:(id)a0 presentingController:(id)a1 completion:(id /* block */)a2;
- (id)_descriptionForStartupAction:(long long)a0;
- (id)_descriptionForWatchType:(long long)a0;
- (BOOL)_existingPlaybackSessionAllowsCellular;
- (BOOL)_mediaItemIsBeingDownloadedAndDownloadAllowsCellular:(id)a0;
- (void)_performRatingAndAgeVerificationWithMediaItem:(id)a0 presentingController:(id)a1 completion:(id /* block */)a2;
- (void)_preflightPlaybackWithPlaylist:(id)a0 presentingViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)_presentCantPlaybackOverCellularAlertControllerWithMediaItem:(id)a0 presentingViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)_presentStartingPlaybackWindowWarningWithRentalMediaItem:(id)a0 presentingViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)_registerStateMachineHandlers;
- (BOOL)_shouldPromptForExpiredDownload:(id)a0;
- (BOOL)_shouldWarnAboutRentalPlaybackQualityForRentalMediaItem:(id)a0;
- (BOOL)_shouldWarnStartingRentalPlaybackWindowWithMediaItem:(id)a0;
- (void)_showAlertControllerForExpirationPromptForDownload:(id)a0 presentingViewController:(id)a1;
- (void)_showCellularPlaybackQualityOptionsForRentalMediaItem:(id)a0 presentingViewController:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithAdamID:(id)a0 watchType:(long long)a1 isRentAndWatchNow:(BOOL)a2;
- (id)initWithAdamID:(id)a0 watchType:(long long)a1 isRentAndWatchNow:(BOOL)a2 contentMetadata:(id)a3;
- (id)initWithCanonicalID:(id)a0 showCanonicalID:(id)a1 mediaType:(id)a2 watchType:(long long)a3 isRentAndWatchNow:(BOOL)a4;
- (id)initWithCanonicalID:(id)a0 showCanonicalID:(id)a1 mediaType:(id)a2 watchType:(long long)a3 isRentAndWatchNow:(BOOL)a4 contentMetadata:(id)a5;
- (id)initWithMediaInfo:(id)a0 watchType:(long long)a1 isRentAndWatchNow:(BOOL)a2;
- (void)performPlaybackStartupFlowWithCompletion:(id /* block */)a0;

@end
