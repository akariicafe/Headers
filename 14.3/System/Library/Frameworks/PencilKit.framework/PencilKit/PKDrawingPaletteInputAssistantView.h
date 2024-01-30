@class UIStackView, NSArray, PKPaletteButton, NSHashTable, NSString, PKPaletteButtonGroupView;

@interface PKDrawingPaletteInputAssistantView : UIView <PKPaletteButtonIntrinsicContentSizeObserver, PKEdgeLocatable, PKPaletteViewSizeScaling>

@property (retain, nonatomic) UIStackView *contentStackView;
@property (retain, nonatomic) PKPaletteButtonGroupView *topOrTrailingGroupView;
@property (retain, nonatomic) PKPaletteButtonGroupView *bottomOrLeadingGroupView;
@property (retain, nonatomic) PKPaletteButton *keyboardButton;
@property (retain, nonatomic) PKPaletteButton *returnKeyButton;
@property (retain, nonatomic) NSHashTable *viewStateObservers;
@property (copy, nonatomic) NSArray *buttons;
@property (readonly, nonatomic) BOOL hasInputAssistantItems;
@property (nonatomic) BOOL useCompactLayout;
@property (nonatomic) BOOL shouldShowKeyboardButton;
@property (nonatomic) BOOL shouldShowReturnKeyButton;
@property (nonatomic) BOOL enableKeyboardButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long edgeLocation;
@property (nonatomic) double scalingFactor;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)_updateUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateContentScalingFactor;
- (void)removeViewStateObserver:(id)a0;
- (void)addViewStateObserver:(id)a0;
- (void)_updateGroupViewContents;
- (void)_updateContentViewSpacing;
- (void)_notifyViewStateDidChange;
- (void)_updateContentOrientation;
- (id)_topOrTrailingGroupViewButtons;
- (long long)_contentStackViewAlignment;
- (double)_contentStackViewSpacing;
- (void)buttonDidChangeIntrinsicContentSize:(id)a0;

@end
