@class UINavigationController, NSString, _SBModifierTimelineDetailViewController, UIScrollView, NSMutableArray, UIButton;

@interface SBFluidSwitcherModifierTimelineViewController : UIViewController <_SBFluidSwitcherModifierTimelineEntryViewDelegate> {
    NSMutableArray *_entryViews;
    BOOL _ignoreNoise;
    UIScrollView *_scrollView;
    UIButton *_clearButton;
    UIButton *_noiseLevelButton;
    UINavigationController *_navigationController;
    _SBModifierTimelineDetailViewController *_detailViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addEntry:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (void)_reset:(id)a0;
- (void)_toggleNoiseLevel:(id)a0;
- (BOOL)_isNoisyEntry:(id)a0;
- (void)didSelectEntryView:(id)a0;

@end
