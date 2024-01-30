@class PXCMMEnabledStatusProvider, NSString, PXGadgetNavigationHelper, PXMessagesRecentPhotosGadgetProvider, PXCMMSuggestionsDataSourceManager, PXMessagesExtensionViewModel, NSArray, UIViewController, PXMessagesCMMSuggestionsGadgetProvider, PXCloudWelcomeGadgetProvider;
@protocol PXGadgetTransition, PXGadgetDelegate, PXPhotoLibraryPresenting;

@interface PXMessagesGadgetDataSourceManager : PXGadgetDataSourceManager <PXChangeObserver, PXCMMCloudGadgetViewControllerDelegate> {
    PXMessagesExtensionViewModel *_viewModel;
    PXCloudWelcomeGadgetProvider *_cloudWelcomeGadgeProvider;
    PXMessagesCMMSuggestionsGadgetProvider *_suggestionsGadgetProvider;
    NSArray *_cachedGadgetProviders;
    PXCMMEnabledStatusProvider *_cmmEnabledStatusProvider;
}

@property (retain, nonatomic) PXMessagesRecentPhotosGadgetProvider *recentPhotosProvider;
@property (retain, nonatomic) PXCMMSuggestionsDataSourceManager *suggestionsDataSourceManager;
@property (retain, nonatomic) UIViewController<PXPhotoLibraryPresenting> *recentPhotosViewController;
@property (nonatomic) double recentPhotosHeight;
@property (copy, nonatomic) NSString *placeholderTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<PXGadgetTransition> gadgetTransition;
@property (readonly, nonatomic) PXGadgetNavigationHelper *rootNavigationHelper;
@property (weak, nonatomic) id<PXGadgetDelegate> nextGadgetResponder;

@end
