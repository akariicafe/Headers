@class UINavigationController, NSString, _SBModifierTimelineDetailViewController, UIScrollView, NSMutableArray, UIButton;

@interface SBFluidSwitcherModifierTimelineViewController : UIViewController <_SBFluidSwitcherModifierTimelineEntryViewDelegate> {
    NSMutableArray *_entryViews;
    UIScrollView *_scrollView;
    UIButton *_clearButton;
    UINavigationController *_navigationController;
    _SBModifierTimelineDetailViewController *_detailViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_reset:(id)a0;
- (void).cxx_destruct;
- (void)addEntry:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)didSelectEntryView:(id)a0;

@end
