@class NSHashTable;

@interface PXUserEventTracker : PXUserEventTrackerCommon {
    double _timeLoggedOnDetailViewWillAppear;
    double _timeLoggedOnMemoriesFeedWillAppear;
    unsigned long long _totalNumberOfRelatedJumps;
    unsigned long long _MaxDepthOfRelatedJumps;
}

@property (class, readonly) PXUserEventTracker *sharedInstance;

@property (retain, nonatomic, setter=_setRelatedLookupTable:) NSHashTable *_relatedLookupTable;

- (void)_aggdDurationLoggingDryrun:(unsigned long long)a0 duration:(double)a1;
- (void)didNavigateInOneUpFromOrigin:(long long)a0;
- (void)_logAggdAddValueForScalarKey:(struct __CFString { } *)a0 value:(long long)a1;
- (void)didFinishViewingDetailsWithCurrentContext:(id)a0;
- (void)logForYouSuggestionSharedCount;
- (void)_logAggdDurationCounterForLogSubState:(unsigned long long)a0 duration:(double)a1;
- (void)didFinishViewingMemoriesFeedView;
- (void)_logAggdRelatedJumpStatistics:(unsigned long long)a0 totalJumpCount:(unsigned long long)a1;
- (void)didCreateMemoryViaAddToMemories;
- (void)logCounterValuesForLogSubState:(unsigned long long)a0 duration:(double)a1;
- (void)logForYouNavigatedToSharedAlbumActivityViewFromRecentActivityEntry;
- (void)logForYouMemoriesDetailsCount;
- (void)didFavoriteMemory;
- (void)logUserDidSelectGadgetAccessoryButtonWithKey:(struct __CFString { } *)a0;
- (void)logInterestingMemoryNotificationRespondedCount;
- (void)_aggdJumpCountLoggingDryrun:(unsigned long long)a0 totalJumpCount:(unsigned long long)a1;
- (void)willViewDetailsWithCurrentContext:(id)a0;
- (void)logNavigationListViewTapWithKey:(struct __CFString { } *)a0;
- (void)didViewDetailsForAssetCollection:(id)a0;
- (void)logInterestingMemoryNotificationSeenCount;
- (void)_aggdDurationLoggingDryrunForSubState:(unsigned long long)a0 duration:(double)a1;
- (void)_logAggdDurationCounterForLogState:(unsigned long long)a0 duration:(double)a1;
- (struct __CFString { } *)_aggdKeyForFirstTimeExperienceIsReady:(BOOL)a0 librarySize:(long long)a1;
- (void)logForYouSharedAlbumInvitationReportedAsJunkCount;
- (void).cxx_destruct;
- (void)logCounterValuesForLogState:(unsigned long long)a0 duration:(double)a1;
- (id)init;
- (void)logForYouInboxItemSelectedWithType:(long long)a0;
- (void)logCounterValuesForLogSubSubState:(unsigned long long)a0 duration:(double)a1;
- (void)logForYouSuggestionSavedCount;
- (void)logViewCountForLogState:(unsigned long long)a0;
- (void)didPresentOneUpFromOrigin:(long long)a0;
- (void)logForYouInboxViewedCount;
- (void)logForYouSharedAlbumInvitationAcceptedCount;
- (void)logImpressionCountForEventSource:(unsigned long long)a0;
- (void)didConfirmDeleteOfMemory;
- (void)_resetDetailViewTraversalStatistics;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)didPlayMiroMovieForAssetCollection:(id)a0;
- (void)_applicationWillEnterForeground:(id)a0;
- (void)logViewCountForLogSubState:(unsigned long long)a0;
- (void)logForYouMemoriesFeedCount;
- (BOOL)isEventSourceSenderAppearingForTheFirstTime:(id)a0;
- (void)logFirstTimeExpericeReadiness:(BOOL)a0 forLibrarySize:(long long)a1;
- (void)logForYouNavigatedToSharedAlbumActivityViewFromCollageView;
- (void)logForYouSuggestionViewed1UpCount;
- (void)logForYouSharedAlbumInvitationDeclinedCount;
- (void)_logAggdDurationCounterForLogSubSubState:(unsigned long long)a0 duration:(double)a1;
- (void)logForYouSuggestionViewedCount;
- (void)willViewMemoriesFeedView;
- (void)logForYouContextualMemoriesDetailsCount;
- (void)logViewCountForLogSubSubState:(unsigned long long)a0;

@end
