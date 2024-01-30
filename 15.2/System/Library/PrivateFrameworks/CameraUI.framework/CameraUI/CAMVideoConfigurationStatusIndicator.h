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

- (void)selectedByAccessibilityHUDManager:(id)a0;
- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (id)hudItemForAccessibilityHUDManager:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithLayoutStyle:(long long)a0;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x2; })_labelGeometryForSize:(struct CGSize { double x0; double x1; })a0 originX:(double)a1 originY:(double)a2;
- (BOOL)_togglesResolutionForTouchAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)_resolutionString;
- (void).cxx_destruct;
- (void)_updateAppearance;
- (id)init;
- (BOOL)_togglesResolutionOrFramerateForTouchAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_handleTouchAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_sizingForLabel:(id)a0 minWidth:(double)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (BOOL)_togglesFramerateForTouchAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)imageNameForCurrentState;
- (id)_separatorString;
- (BOOL)shouldUseOutline;
- (id)_framerateString;

@end
