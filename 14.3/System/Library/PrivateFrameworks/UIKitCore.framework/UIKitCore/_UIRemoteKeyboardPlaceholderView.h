@class NSString, UIView;

@interface _UIRemoteKeyboardPlaceholderView : UIView <UISplittableInputView, _UIRemoteKeyboardInputViewPlaceholder> {
    UIView *_mirroredView;
    struct CGSize { double width; double height; } _fixedSize;
    id /* block */ _sizeBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGSize { double x0; double x1; } fixedSize;
@property (readonly, retain) UIView *placeheldView;
@property (retain, nonatomic) UIView *fallbackView;
@property (retain, nonatomic) UIView *associatedView;

+ (id)placeholderWithSizer:(id /* block */)a0;
+ (id)placeholderWithWidth:(double)a0 height:(double)a1;
+ (id)placeholderForView:(id)a0;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_endSplitTransitionIfNeeded:(BOOL)a0;
- (void)dealloc;
- (void)layoutMergedSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_compatibleBounds;
- (BOOL)refreshPlaceholder;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)willBeginSplitTransition;
- (void)layoutSplitSubviewsWithLeftContentSize:(struct CGSize { double x0; double x1; })a0 rightContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)_beginSplitTransitionIfNeeded:(double)a0 gapWidth:(double)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateMergedSubviewConstraints;
- (void)updateSplitSubviewContraintsWithLeftContentSize:(struct CGSize { double x0; double x1; })a0 rightContentSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)isEqual:(id)a0;
- (struct CGSize { double x0; double x1; })leftContentViewSize;
- (void)didEndSplitTransition;
- (void)_setProgress:(double)a0 boundedBy:(double)a1;
- (struct CGSize { double x0; double x1; })rightContentViewSize;
- (void)_isPlaceholderViewSelector;
- (void)_setLeftOffset:(double)a0 gapWidth:(double)a1;

@end
