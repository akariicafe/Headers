@class UILabel, UIImageView;
@protocol CAMVideoConfigurationStatusIndicatorDelegate;

@interface CAMVideoConfigurationStatusIndicator : CAMControlStatusIndicator

@property (readonly, nonatomic) UILabel *_resolutionLabel;
@property (readonly, nonatomic) UILabel *_separatorLabel;
@property (readonly, nonatomic) UILabel *_framerateLabel;
@property (nonatomic) struct CGSize { double width; double height; } _resolutionSize;
@property (nonatomic) struct CGSize { double width; double height; } _separatorSize;
@property (nonatomic) struct CGSize { double width; double height; } _framerateSize;
@property (readonly, nonatomic) UIImageView *_borderImageView;
@property (nonatomic) long long layoutStyle;
@property (weak, nonatomic) id<CAMVideoConfigurationStatusIndicatorDelegate> touchDelegate;
@property (nonatomic) long long resolution;
@property (nonatomic) long long framerate;

- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (id)initWithLayoutStyle:(long long)a0;
- (BOOL)_togglesResolutionForTouchAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)shouldUseOutline;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void).cxx_destruct;
- (id)_separatorString;
- (id)imageNameForCurrentState;
- (void)selectedByAccessibilityHUDManager:(id)a0;
- (id)hudItemForAccessibilityHUDManager:(id)a0;
- (BOOL)_togglesResolutionOrFramerateForTouchAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })_sizingForLabel:(id)a0 minWidth:(double)a1;
- (void)_handleTouchAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_togglesFramerateForTouchAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)_resolutionString;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x2; })_labelGeometryForSize:(struct CGSize { double x0; double x1; })a0 originX:(double)a1 originY:(double)a2;
- (id)_framerateString;
- (void)_updateAppearance;

@end
