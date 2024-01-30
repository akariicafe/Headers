@class PXCMMSuggestionsHorizontalGadgetProvider, PXSampleSuggestionProvider, PXForYouFooterGadgetProvider, PXGadgetNavigationHelper, PXHorizontalCollectionGadgetProvider, PXForYouGadgetPriorityManager, PXCMMInvitationsHorizontalGadgetProvider, PXForYouRecentInterestSuggestionsGadgetProvider, PXCloudWelcomeGadgetProvider, PXSharedAlbumActivityHorizontalGadgetProvider, PXPeopleQuestionsGadgetProvider, NSString, PXForYouEditSuggestionsGadgetProvider, PXForYouMemoryGadgetProvider, NSArray;
@protocol PXGadgetTransition, PXGadgetDelegate;

@interface PXForYouGadgetDataSourceManager : PXGadgetDataSourceManager <PXCMMCloudGadgetViewControllerDelegate, PXSettingsKeyObserver> {
    NSArray *_gadgetProviders;
}

@property (retain, nonatomic) PXCMMInvitationsHorizontalGadgetProvider *CMMInvitationsHorizontalGadgetProvider;
@property (retain, nonatomic) PXCMMSuggestionsHorizontalGadgetProvider *CMMSuggestionsHorizontalGadgetProvider;
@property (retain, nonatomic) PXCloudWelcomeGadgetProvider *CMMCloudWelcomeGadgetProvider;
@property (retain, nonatomic) PXSharedAlbumActivityHorizontalGadgetProvider *icpsActivityHorizontalGadgetProvider;
@property (retain, nonatomic) PXHorizontalCollectionGadgetProvider *inboxHorizontalGadgetProvider;
@property (retain, nonatomic) PXHorizontalCollectionGadgetProvider *editSuggestionsHorizontalGadgetProvider;
@property (retain, nonatomic) PXForYouEditSuggestionsGadgetProvider *editSuggestionsGadgetProvider;
@property (retain, nonatomic) PXHorizontalCollectionGadgetProvider *recentInterestSuggestionsHorizontalGadgetProvider;
@property (retain, nonatomic) PXForYouRecentInterestSuggestionsGadgetProvider *recentInterestsSuggestionsGadgetProvider;
@property (retain, nonatomic) PXForYouMemoryGadgetProvider *memoryGadgetProvider;
@property (retain, nonatomic) PXPeopleQuestionsGadgetProvider *peopleQuestionsGadgetProvider;
@property (retain, nonatomic) PXHorizontalCollectionGadgetProvider *peopleQuestionsHorizontalGadgetProvider;
@property (retain, nonatomic) PXForYouFooterGadgetProvider *footerGadgetProvider;
@property (retain, nonatomic) PXSampleSuggestionProvider *sampleSuggestionGadgetsProvider;
@property (readonly, nonatomic) PXForYouGadgetPriorityManager *priorityManager;
@property (readonly, nonatomic) BOOL isLaunchedToTest;
@property (readonly, nonatomic) id<PXGadgetTransition> gadgetTransition;
@property (readonly, nonatomic) PXGadgetNavigationHelper *rootNavigationHelper;
@property (weak, nonatomic) id<PXGadgetDelegate> nextGadgetResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)_adjustGadgetTypeForRanking:(unsigned long long)a0;
- (id)gadgetProviders;
- (void).cxx_destruct;
- (void)_calendarDayChanged;
- (id)hiddenGadgetProviders;
- (void)didLoadDataForPriorities;
- (id /* block */)gadgetSortComparator;
- (long long)_adjustComparasionForInbox:(long long)a0 gadgetType1:(unsigned long long)a1 gadgeType2:(unsigned long long)a2;
- (long long)_compareRank1:(long long)a0 rank2:(long long)a1;
- (BOOL)_canShowSurveyQuestionsGadget;
- (void)removeCachedProviders;
- (BOOL)_resetSortingRanksIfNecessary;
- (void)_calendarDayChangedForced:(BOOL)a0;
- (void)_updatePrioritiesForCalendarChange;
- (id)initWithPriorityManager:(id)a0 isLaunchedToTest:(BOOL)a1;
- (id /* block */)gadgetProviderSortComparator;
- (BOOL)_gadgetProviderIsInbox:(id)a0;
- (void)presentationRequestForWelcomeCloudViewController:(id)a0;
- (void)didUpdateCloudPhotoLibraryEnablement:(id)a0;
- (void)_forceCalendarDayChanged;
- (void)settings:(id)a0 changedValueForKey:(id)a1;

@end
