@class NSArray, PKTextInputFeedbackController, UIView;

@interface PKTextInputGestureFeedbackView : UIView

@property (retain, nonatomic) NSArray *_highlightViews;
@property (retain, nonatomic) UIView *_reserveSpaceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _reserveSpaceCaretRect;
@property (nonatomic) BOOL _needsRefresh;
@property (weak, nonatomic) PKTextInputFeedbackController *dataSourceController;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)cancelShowingReserveSpaceIntro;
- (void)setNeedsRefreshFeedbackViews;
- (void)beginShowingReserveSpaceIntro;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_rectInsetsToApplyForFeedbackType:(long long)a0;
- (id)_highlightTextRectsToDisplayForElementContent:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 feedbackType:(long long)a2;
- (void)_ensureHighlightViewsCount:(long long)a0;
- (void)_updateHighlightViewsLookForFeedbackType:(long long)a0 element:(id)a1;
- (id)reserveSpaceRects;
- (void)_prepareForReserveSpaceAnimations;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectionClipRectForElement:(id)a0;

@end
