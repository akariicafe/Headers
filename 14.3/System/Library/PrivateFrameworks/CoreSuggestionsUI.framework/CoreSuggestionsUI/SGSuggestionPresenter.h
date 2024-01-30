@class SGSuggestionAction, NSArray, SGBanner, NSString, SGSuggestionStore, UIViewController;
@protocol SGSuggestionPresenterDelegate;

@interface SGSuggestionPresenter : NSObject <UIPopoverPresentationControllerDelegate, SGSuggestionDelegate> {
    SGBanner *_banner;
    SGSuggestionAction *_bannerPrimaryAction;
    SGSuggestionAction *_bannerDismissAction;
    UIViewController *_presentedViewController;
    SGSuggestionStore *_suggestionStore;
}

@property (nonatomic) BOOL wantsToShowBanner;
@property (weak, nonatomic) id<SGSuggestionPresenterDelegate> delegate;
@property (readonly, nonatomic) SGBanner *banner;
@property (copy, nonatomic) NSArray *suggestions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)formatList:(id)a0;

- (void)presentationController:(id)a0 willPresentWithAdaptiveStyle:(long long)a1 transitionCoordinator:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_dismissPresentedViewController:(id)a0;
- (void)dismissViewController:(id)a0;
- (id)_presentingViewController;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)presentViewController:(id)a0;
- (void)removeSuggestion:(id)a0;
- (BOOL)presentationControllerShouldDismiss:(id)a0;
- (void)_dismissViewControllerAnimated:(BOOL)a0;
- (void)addSuggestion:(id)a0;
- (id)_presentedControllerDoneButtonItem;
- (void)_updateBanner;
- (id)suggestionStore;
- (id)formatMixedCategoriesTitle:(id)a0;
- (void)_bannerPrimaryAction;
- (void)suggestion:(id)a0 actionFinished:(BOOL)a1;
- (void)suggestionWasUpdated:(id)a0;
- (long long)suggestionsUIContext;
- (void)_listDidChangeNotification:(id)a0;
- (void)_bannerDismiss;
- (id)formatMixedCategoriesSubtitle:(id)a0;
- (id)_viewControllerForPresentingFromBanner;
- (void)_presentModalViewControllerFromButton:(id)a0;
- (void)_presentModalViewController:(id)a0 fromSourceView:(id)a1;
- (id)_presentedControllerCancelButtonItem;

@end
