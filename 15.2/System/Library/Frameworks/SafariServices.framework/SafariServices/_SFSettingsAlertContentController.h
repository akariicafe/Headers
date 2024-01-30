@class UIStackView, NSString, _SFSettingsAlertItem, NSArray, UIView, UIControl, NSMutableArray, NSLayoutConstraint, UISelectionFeedbackGenerator, NSMutableIndexSet, UIScrollView;

@interface _SFSettingsAlertContentController : UIViewController <UIGestureRecognizerDelegate, SFSettingsAlertItemViewDelegate> {
    NSMutableArray *_items;
    NSMutableIndexSet *_groupStartIndices;
    UIScrollView *_scrollView;
    UIStackView *_stackView;
    NSArray *_focusedItemConstraints;
    NSArray *_stackViewTopBottomConstraints;
    NSLayoutConstraint *_stackViewWidthConstraint;
    UIView *_lastViewForAlignment;
    UIControl *_controlHighlightedForPan;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    BOOL _updatePreferredContentSizeAfterLayout;
    BOOL _updateScrollPositionAfterLayout;
}

@property (readonly, nonatomic) NSArray *items;
@property (nonatomic) BOOL usesReverseOrder;
@property (retain, nonatomic) _SFSettingsAlertItem *focusedItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_alertController;
- (void)addItem:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)_updatePreferredContentSize;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)loadView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_scrollToBottomIfNeeded;
- (void)addDivider;
- (void)_updateSeparators;
- (void)_addGroupSeparatorIfNeededBeforeItemAtIndex:(unsigned long long)a0;
- (void)_addViewForItem:(id)a0;
- (void)_panRecognized:(id)a0;
- (void)_updateFocusedItemConstraints;
- (id)_createViewForItem:(id)a0;
- (void)_alignButtonImageView:(id)a0;
- (void)_tappedItemView:(id)a0;
- (void)_stepperValueChanged:(id)a0;
- (void)alertItemViewContentSizeDidChange:(id)a0;

@end
