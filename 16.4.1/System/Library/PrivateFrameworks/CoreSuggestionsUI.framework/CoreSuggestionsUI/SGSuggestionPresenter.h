@class SGSuggestionAction, NSString, NSArray, UIView, SGSuggestionStore, NSMutableArray, UIViewController, SGSuggestionCategoryList;
@protocol SGBannerProtocol, SGSuggestionPresenterDelegate;

@interface SGSuggestionPresenter : NSObject <UIPopoverPresentationControllerDelegate, SGSuggestionDelegate> {
    UIView<SGBannerProtocol> *_banner;
    SGSuggestionAction *_bannerPrimaryAction;
    SGSuggestionAction *_bannerDismissAction;
    UIViewController *_presentedViewController;
    SGSuggestionStore *_suggestionStore;
    NSMutableArray *_filteredSuggestions;
    SGSuggestionCategoryList *_suggestionCategoryList;
    unsigned long long _currentSuggestionsCount;
    BOOL _forceUpdate;
}

@property (nonatomic) BOOL wantsToShowBanner;
@property (weak, nonatomic) id<SGSuggestionPresenterDelegate> delegate;
@property (readonly, nonatomic) UIView<SGBannerProtocol> *banner;
@property (copy, nonatomic) NSArray *suggestions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)formatList:(id)a0;

- (void)presentationControllerDidDismiss:(id)a0;
- (void)dismissViewController:(id)a0;
- (id)_presentingViewController;
- (void)dealloc;
- (id)init;
- (BOOL)presentationControllerShouldDismiss:(id)a0;
- (void).cxx_destruct;
- (void)presentViewController:(id)a0;
- (void)presentationController:(id)a0 willPresentWithAdaptiveStyle:(long long)a1 transitionCoordinator:(id)a2;
- (id)tableViewController;
- (void)_dismissPresentedViewController:(id)a0;
- (void)addSuggestion:(id)a0;
- (void)dismissAllSuggestions;
- (void)reloadSuggestionsFromSearchableItems;
- (void)removeSuggestion:(id)a0;
- (void)_dismissViewControllerAnimated:(BOOL)a0;
- (void)_bannerDismiss;
- (id)suggestionStore;
- (id)_sortSuggestionByCategoryUsing:(id)a0;
- (long long)_bannerAccessoryType;
- (void)_bannerPrimaryAction;
- (void)_filterSuggestions;
- (void)_listDidChangeNotification:(id)a0;
- (void)_presentModalViewController:(id)a0 fromSourceView:(id)a1;
- (void)_presentModalViewControllerFromButton:(id)a0;
- (id)_presentedControllerCancelButtonItem;
- (id)_presentedControllerDoneButtonItem;
- (void)_removeBanner;
- (void)_restoreSuggestions;
- (void)_updateBanner;
- (id)_viewControllerForPresentingFromBanner;
- (void)bannerDismissAction;
- (void)bannerPrimaryAction;
- (id)formatMixedCategoriesSubtitle:(id)a0;
- (id)formatMixedCategoriesTitle:(id)a0;
- (void)suggestion:(id)a0 actionFinished:(BOOL)a1;
- (void)suggestionBatchDismissal;
- (void)suggestionWasUpdated:(id)a0;
- (long long)suggestionsUIContext;

@end
