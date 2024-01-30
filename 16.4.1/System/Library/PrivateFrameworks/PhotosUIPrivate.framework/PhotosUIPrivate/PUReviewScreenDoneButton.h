@interface PUReviewScreenDoneButton : UIButton

@property (nonatomic) BOOL _needsUpdate;
@property (nonatomic) unsigned long long preferredStyle;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } tappableEdgeInsets;

+ (id)doneButton;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)_updateIfNeeded;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;

@end
