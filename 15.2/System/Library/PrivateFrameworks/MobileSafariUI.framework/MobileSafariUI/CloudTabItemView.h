@class WBSCloudTab, NSString, CloudTabItemDeleteConfirmationView, UIView, ScrollingPanGestureRecognizer;
@protocol CloudTabItemViewDelegate;

@interface CloudTabItemView : UIButton <UIGestureRecognizerDelegate> {
    UIView *_separatorView;
    UIView *_highlightView;
    BOOL _editing;
    double _startingSwipeOffset;
    double _swipeOffset;
    ScrollingPanGestureRecognizer *_panGestureRecognizer;
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

+ (double)defaultHeightForTraitCollection:(id)a0;
+ (long long)_numberOfLinesForTraitCollection:(id)a0;
+ (double)_defaultItemHeightForTraitCollection:(id)a0;

- (void)layoutSubviews;
- (void)_updateStyle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)dealloc;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_deleteButtonTapped:(id)a0;
- (void)_setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)_panRecognized:(id)a0;
- (void)_setUpDeleteConfirmationViewIfNecessary;
- (double)_swipeOffsetFromPanGestureRecognizer;

@end
