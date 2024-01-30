@class NSMutableDictionary, NSArray, UILayoutGuide, UIView, BKUIPearlInstructionView;
@protocol BKUIPearlBottomContainerDelegate, BKUIScrollableContainer;

@interface BKUIPearlEnrollViewBottomContainer : UIView

@property (nonatomic) BOOL inBuddy;
@property (nonatomic) BOOL inDemo;
@property (nonatomic) double overlapValue;
@property (retain, nonatomic) BKUIPearlInstructionView *instructionView;
@property (retain, nonatomic) BKUIPearlInstructionView *animatingInstructionView;
@property (retain, nonatomic) NSMutableDictionary *customInstructionStrings;
@property (retain, nonatomic) NSMutableDictionary *customDetailStrings;
@property (retain, nonatomic) UIView<BKUIScrollableContainer> *scrollview;
@property (retain, nonatomic) UIView<BKUIScrollableContainer> *overlappingScrollview;
@property (retain, nonatomic) UIView<BKUIScrollableContainer> *onScreenScrollview;
@property (retain, nonatomic) UIView<BKUIScrollableContainer> *offScreenScrollview;
@property (nonatomic) BOOL squareNeedsPositionLayout;
@property (retain, nonatomic) NSArray *onscreenScrollViewConstraints;
@property (retain, nonatomic) UILayoutGuide *instructionBaselineLayoutGuide;
@property (weak, nonatomic) id<BKUIPearlBottomContainerDelegate> delegate;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)buttonTray;
- (void)setCustomDetailString:(id)a0 forState:(int)a1;
- (id)_horizontalConstraintsForTagAlongTransitionView:(id)a0 state:(int)a1 position:(long long)a2;
- (id)nextStateButton;
- (void)_configureInstructionView:(id)a0 forState:(int)a1 substate:(int)a2;
- (id)_detailTextForState:(int)a0 substate:(int)a1;
- (id)_instructionTextForState:(int)a0 substate:(int)a1;
- (id)_locStateDetailedLabelNameForState:(int)a0;
- (id)_locStateNameForState:(int)a0;
- (id)_targetScrollViewForState:(int)a0;
- (double)_topPaddingForButtonTray:(id)a0;
- (void)_updateButtonLayoutForScrollView:(id)a0;
- (void)_updateButtonVisibilityForScrollView:(id)a0;
- (void)_updateButtonVisibilityForScrollView:(id)a0 state:(int)a1 subState:(int)a2;
- (id)_updateTopPaddingAndReturnHorizontalConstraintsForScrollView:(id)a0 state:(int)a1 position:(long long)a2;
- (id)bottomLinkButton;
- (id)buttonTrayTopAnchor;
- (void)escapeHatchButtonWasPressed:(id)a0;
- (void)finalizeInstructionAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inBuddy:(BOOL)a1 inDemo:(BOOL)a2 scrollView:(id)a3 overlapScrollView:(id)a4 delegate:(id)a5 squareNeedsPositionLayout:(BOOL)a6;
- (void)nextStateButtonWasPressed:(id)a0;
- (void)prepareForAnimationToState:(int)a0 fromState:(int)a1 subState:(int)a2 advancing:(BOOL)a3 parentView:(id)a4;
- (void)prepareForAnimationToState:(int)a0 fromState:(int)a1 subState:(int)a2 advancing:(BOOL)a3 tagAlong:(id)a4 parentView:(id)a5;
- (void)retryWasPressed:(id)a0;
- (void)setCustomInstructionString:(id)a0 forState:(int)a1;
- (void)setupInitialUI;
- (void)updateButtonLayout;
- (void)updateButtonVisibility;
- (void)updateInstructionViewContentForState:(int)a0 substate:(int)a1;

@end
