@class NSHashTable;

@interface PXUserEventTracker : PXUserEventTrackerCommon {
    double _timeLoggedOnDetailViewWillAppear;
    double _timeLoggedOnMemoriesFeedWillAppear;
    unsigned long long _totalNumberOfRelatedJumps;
    unsigned long long _MaxDepthOfRelatedJumps;
}

@property (class, readonly) PXUserEventTracker *sharedInstance;

@property (retain, nonatomic, setter=_setRelatedLookupTable:) NSHashTable *_relatedLookupTable;

- (void)_applicationWillEnterForeground:(id)a0;
- (void)logInterestingMemoryNotificationSeenCount;
- (void)didCreateMemoryViaAddToMemories;
- (void)didPresentOneUpFromOrigin:(long long)a0;
- (void)_logAggdDurationCounterForLogState:(unsigned long long)a0 duration:(double)a1;
- (void)_aggdJumpCountLoggingDryrun:(unsigned long long)a0 totalJumpCount:(unsigned long long)a1;
- (void)_logAggdAddValueForScalarKey:(struct __CFString { } *)a0 value:(long long)a1;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)logForYouNavigatedToSharedAlbumActivityViewFromRecentActivityEntry;
- (void)willViewMemoriesFeedView;
- (void)didPlayMovieForAssetCollection:(id)a0;
- (void)didFinishViewingMemoriesFeedView;
- (void)_aggdDurationLoggingDryrun:(unsigned long long)a0 duration:(double)a1;
- (void)logForYouSuggestionSavedCount;
- (void)logForYouContextualMemoriesDetailsCount;
- (void)_aggdDurationLoggingDryrunForSubState:(unsigned long long)a0 duration:(double)a1;
- (void)logForYouInboxViewedCount;
- (BOOL)isEventSourceSenderAppearingForTheFirstTime:(id)a0;
- (void)didFinishViewingDetailsWithCurrentContext:(id)a0;
- (void)logForYouSuggestionSharedCount;
- (void)logCounterValuesForLogSubState:(unsigned long long)a0 duration:(double)a1;
- (void)logForYouSuggestionViewedCount;
- (void)logInterestingMemoryNotificationRespondedCount;
- (void)logFirstTimeExpericeReadiness:(BOOL)a0 forLibrarySize:(long long)a1;
- (void)logForYouSharedAlbumInvitationAcceptedCount;
- (void)didFavoriteMemory;
- (void)logForYouSuggestionViewed1UpCount;
- (void)didViewDetailsForAssetCollection:(id)a0;
- (void)logForYouInboxItemSelectedWithType:(long long)a0;
- (void)logUserDidSelectGadgetAccessoryButtonWithKey:(struct __CFString { } *)a0;
- (void)logViewCountForLogState:(unsigned long long)a0;
- (void)logNavigationListViewTapWithKey:(struct __CFString { } *)a0;
- (void)didNavigateInOneUpFromOrigin:(long long)a0;
- (void)logViewCountForLogSubState:(unsigned long long)a0;
- (void)didConfirmDeleteOfMemory;
- (struct __CFString { } *)_aggdKeyForFirstTimeExperienceIsReady:(BOOL)a0 librarySize:(long long)a1;
- (void)willViewDetailsWithCurrentContext:(id)a0;
- (void)logForYouNavigatedToSharedAlbumActivityViewFromCollageView;
- (id)init;
- (void)logForYouMemoriesDetailsCount;
- (void)_resetDetailViewTraversalStatistics;
- (void)logCounterValuesForLogState:(unsigned long long)a0 duration:(double)a1;
- (void)_logAggdDurationCounterForLogSubState:(unsigned long long)a0 duration:(double)a1;
- (void)_logAggdRelatedJumpStatistics:(unsigned long long)a0 totalJumpCount:(unsigned long long)a1;
- (void)logForYouSharedAlbumInvitationDeclinedCount;
- (void)_logAggdDurationCounterForLogSubSubState:(unsigned long long)a0 duration:(double)a1;
- (void)logForYouSharedAlbumInvitationReportedAsJunkCount;
- (void)logCounterValuesForLogSubSubState:(unsigned long long)a0 duration:(double)a1;
- (void).cxx_destruct;
- (void)logForYouMemoriesFeedCount;
- (void)logImpressionCountForEventSource:(unsigned long long)a0;
- (void)logViewCountForLogSubSubState:(unsigned long long)a0;

@end
