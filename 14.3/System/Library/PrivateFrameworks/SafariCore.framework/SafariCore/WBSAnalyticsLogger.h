@class NSMutableDictionary, NSString, NSObject, AWDServerConnection;
@protocol OS_dispatch_queue;

@interface WBSAnalyticsLogger : NSObject {
    NSObject<OS_dispatch_queue> *_analyticsSynchronizationQueue;
    NSMutableDictionary *_pageLoadStartTimes;
    long long _persona;
    NSString *_safariVersion;
}

@property (readonly, nonatomic) AWDServerConnection *awdServer;

+ (id)sharedLogger;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)didStartMigratingToCKBookmarksAsPrimaryMigrator:(BOOL)a0 localState:(long long)a1 remoteState:(long long)a2;
- (void)didSuccessfullyMigrateToCKBookmarksAsPrimaryMigrator:(BOOL)a0;
- (void)didFailToMigrateToCKBookmarksAsPrimaryMigrator:(BOOL)a0 error:(id)a1;
- (void)ckBookmarkSyncFinishedWithResult:(long long)a0 error:(id)a1;
- (void)submitVersioningMetricWithVersion:(id)a0 variant:(int)a1;
- (void)pageLoadCompleted:(unsigned long long)a0 withErrorCode:(long long)a1;
- (void)userDidSharePasswordWithOutcome:(int)a0;
- (void)userDidReceiveSharedPasswordWithOutcome:(int)a0;
- (void)registerSafariVersion:(id)a0 persona:(long long)a1;
- (void)recordSearchResultPageImpressionWithDefaultSearchProviderIdentifier:(id)a0 searchProviderIdentifier:(id)a1 provenance:(long long)a2;
- (void)reportWeakPasswordWarningEvent:(long long)a0;
- (void)didBanWebsiteWithMetadata:(id)a0;
- (void)didModifyPerSitePreferenceWithIdentifier:(id)a0 modificationLevel:(long long)a1 type:(long long)a2 method:(long long)a3;
- (void)didRevealDownloadWithMIMEType:(id)a0 uti:(id)a1 result:(long long)a2;
- (void)didMoveToBackgroundWithNumberOfOnGoingDownloads:(unsigned long long)a0;
- (void)didSetDownloadFolderToProviderWithIdentifier:(id)a0 isDefaultFolder:(BOOL)a1;
- (void)didDownvoteDataSourceWithMetadata:(id)a0;
- (void)_didSelectFavoritesGridItemOfSection:(int)a0 type:(int)a1 atIndex:(unsigned long long)a2 itemsPerRow:(unsigned long long)a3 isNewTabPage:(BOOL)a4;
- (void)pageLoadStarted:(unsigned long long)a0;
- (void)didRetrieveNumberOfRecommendations:(unsigned long long)a0 numberOfTopics:(unsigned long long)a1;
- (void)didOpenRecommendationWithMetadata:(id)a0 withPosition:(long long)a1;
- (void)didToggleShowMoreButtonForSection:(long long)a0;
- (void)didToggleShowLessButtonForSection:(long long)a0;
- (void)didRetrieveNumberOfFavorites:(unsigned long long)a0;
- (void)didRetrieveNumberOfFrequentlyVisitedSites:(unsigned long long)a0;
- (void)didSwitchToSafari:(id)a0 entryPoint:(id)a1;
- (void)didReceiveWebKitAnalyticsEventWithName:(id)a0 payload:(id)a1;
- (void)reportStatusForExtensions:(id)a0 extensionType:(id)a1;
- (void)reportNumberOfExtensionsWithFrequencyDictionaryProvider:(id /* block */)a0;
- (void)reportFirstInteractionAfterTranslation:(long long)a0 maxVisibleHeightPercentage:(float)a1;
- (void)didDetectLanguageOfWebpage:(id)a0 primaryLocale:(id)a1 webpageCanBeTranslatedToPrimaryLocale:(BOOL)a2 canOfferTranslation:(BOOL)a3 firstNonPrimaryLocaleThatCanBeTranslatedTo:(id)a4 numberOfPreferredLocales:(unsigned long long)a5 notificationLevel:(long long)a6;
- (void)didRequestTranslatingToLocale:(id)a0 webpageLocale:(id)a1 requestType:(long long)a2 isTargetLocalePrimaryLocale:(BOOL)a3;
- (id)_nameForStartPageSection:(long long)a0;
- (void)didToggleShowMoreButtonForSection:(long long)a0 isShowingMore:(BOOL)a1;
- (void)performOnAnalyticsQueueWithDelay:(long long)a0 block:(id /* block */)a1;
- (void)_sendEvent:(id)a0 usingBlock:(id /* block */)a1;
- (void)pageLoadCompleted:(unsigned long long)a0;
- (void)_sendEventAddingVersionInfo:(id)a0 usingBlock:(id /* block */)a1;
- (void)didReceiveInvalidMessageFromWebProcess:(id)a0;
- (void)didAutoFillCustomContactSetShowingMeCard:(BOOL)a0;
- (void)didShowContactAutoFillSetsWithMeCardSets:(BOOL)a0 showingPreviouslyCustomizedSet:(BOOL)a1;
- (void)didSelectContactAutoFillSet:(int)a0 hasPreviouslyCustomizedSet:(BOOL)a1;
- (void)showedAutoFillQuickTypeSuggestionWithCategory:(int)a0 formProperty:(id)a1;
- (void)userTappedAutoFillQuickTypeSuggestionWithCategory:(int)a0 formProperty:(id)a1;
- (void)userDidParticipateInPasswordAutoFillWithInteraction:(int)a0;
- (void)userInteractedWithGeneratedPasswordWithInteractionType:(int)a0;
- (void)didToggleGloballyUseAutomaticReader:(BOOL)a0;
- (void)registerQueriableMetric:(unsigned int)a0 callback:(id /* block */)a1;
- (void)didSelectFavoritesGridItemOfType:(int)a0 atIndex:(unsigned long long)a1 itemsPerRow:(unsigned long long)a2 isNewTabPage:(BOOL)a3;
- (void)didSelectFavoritesGridFrequentlyVisitedItemAtIndex:(unsigned long long)a0 itemsPerRow:(unsigned long long)a1 isNewTabPage:(BOOL)a2;
- (void)didToggleDomainSpecificAutomaticReader:(BOOL)a0;
- (void)submitAutomaticReaderActivation:(int)a0;
- (void)unableToSilentlyMigrateToCKBookmarksWithReason:(int)a0;

@end
