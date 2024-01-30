@class WBSCloudTab, NSString, CloudTabItemDeleteConfirmationView, UIView, SFScrollingPanGestureRecognizer;
@protocol CloudTabItemViewDelegate;

@interface CloudTabItemView : UIButton <UIGestureRecognizerDelegate> {
    UIView *_separatorView;
    UIView *_highlightView;
    BOOL _editing;
    double _startingSwipeOffset;
    double _swipeOffset;
    SFScrollingPanGestureRecognizer *_panGestureRecognizer;
    CloudTabItemDeleteConfirmationView *_deleteConfirmationView;
    double _leftEdgeInset;
}

@property (nonatomic) long long style;
@property (weak, nonatomic) id<CloudTabItemViewDelegate> delegate;
@property (retain, nonatomic) WBSCloudTab *cloudTab;
@property (nonatomic, getter=isEditable) BOOL editable;
@property (nonatomic) BOOL showsSeparator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)_defaultItemHeightForTraitCollection:(id)a0;
+ (long long)_numberOfLinesForTraitCollection:(id)a0;
+ (double)defaultHeightForTraitCollection:(id)a0;

- (void)_updateStyle;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_panRecognized:(id)a0;
- (void)_deleteButtonTapped:(id)a0;
- (void)_setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)_setUpDeleteConfirmationViewIfNecessary;
- (double)_swipeOffsetFromPanGestureRecognizer;

@end
