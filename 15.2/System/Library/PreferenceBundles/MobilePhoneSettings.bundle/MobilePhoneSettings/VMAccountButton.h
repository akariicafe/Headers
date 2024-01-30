@class NSCache;

@interface VMAccountButton : UIButton

@property (class, readonly, nonatomic) NSCache *imageCache;
@property (class, readonly, nonatomic) VMAccountButton *accountButton;

@property (readonly, nonatomic) double titleLabelFirstBaselineAnchorLayoutConstraintConstant;
@property (readonly, nonatomic) double titleLabelLastBaselineAnchorLayoutConstraintConstant;
@property (nonatomic) double preferredIntrinsicContentSizeWidth;

+ (id)backgroundImageNameForSize:(struct CGSize { double x0; double x1; })a0 state:(unsigned long long)a1;
+ (id)backgroundImageForSize:(struct CGSize { double x0; double x1; })a0 state:(unsigned long long)a1;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
