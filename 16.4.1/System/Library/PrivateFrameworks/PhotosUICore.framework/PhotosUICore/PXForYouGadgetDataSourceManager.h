@class PXCMMSuggestionsHorizontalGadgetProvider, NSString, NSDictionary, NSArray, PXCloudWelcomeGadgetProvider, PXGadgetNavigationHelper, NSDate;
@protocol PXGadgetTransition, PXGadgetDelegate;

@interface PXForYouGadgetDataSourceManager : PXGadgetDataSourceManager <PXCMMCloudGadgetViewControllerDelegate> {
    NSArray *_cachedForYouGadgetProviders;
    NSDictionary *_cachedUserRelevanceDateForContentIdentifiers;
    NSDate *_dateUsedForCurrentGadgetOrder;
}

@property (retain, nonatomic) PXCMMSuggestionsHorizontalGadgetProvider *CMMSuggestionsHorizontalGadgetProvider;
@property (retain, nonatomic) PXCloudWelcomeGadgetProvider *CMMCloudWelcomeGadgetProvider;
@property (readonly, nonatomic) NSDictionary *userRelevanceDateForContentIdentifiers;
@property (readonly, nonatomic) id<PXGadgetTransition> gadgetTransition;
@property (readonly, nonatomic) PXGadgetNavigationHelper *rootNavigationHelper;
@property (weak, nonatomic) id<PXGadgetDelegate> nextGadgetResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeCachedProviders;
- (id)gadgetProviders;
- (id)init;
- (void).cxx_destruct;
- (void)_calendarDayChanged;
- (BOOL)_canShowSurveyQuestionsGadget;
- (void)_invalidateCachedGadgetProviders;
- (void)_invalidateCachedUserRelevanceDates;
- (void)_pretendDateChanged;
- (void)didUpdateCloudPhotoLibraryEnablement:(id)a0;
- (id /* block */)gadgetProviderSortComparator;
- (id /* block */)gadgetSortComparator;
- (id)hiddenGadgetProviders;
- (void)presentationRequestForWelcomeCloudViewController:(id)a0;
- (void)test_pretendItsTommorow;

@end
