@class NSString, UIImageView, UILabel, UIView;

@interface AXElementNamesItemView : UIView {
    UILabel *_label;
    UIView *_backgroundView;
    UIImageView *_backgroundMaskView;
}

@property (nonatomic) struct CGSize { double width; double height; } labelContainerSize;
@property (nonatomic) struct CGPoint { double x; double y; } arrowTipLocation;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } elementFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } availableBounds;
@property (nonatomic) long long labelPosition;
@property (readonly, nonatomic) BOOL hasExtendedArrow;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } labelContainerFrame;
@property (nonatomic) struct CGSize { double width; double height; } forcedLabelContainerSize;

- (double)_cornerRadius;
- (void).cxx_destruct;
- (double)_arrowHeight;
- (void)_updateLabelContainerSize;
- (void)_updateFromMainProperties;
- (BOOL)_usesExtendedArrow;
- (void)_updateFromLabelContainerFrame;
- (BOOL)_usesArrow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_collisionFrameForArrow;
- (BOOL)_arrowPointsDown;
- (BOOL)_shouldAllowLongArrows;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_elementFrameAdjustedForBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_validateLabelContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_outlineWidth;
- (id)_newBackgroundImage;
- (id)initWithName:(id)a0 elementFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 availableBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 styleProvider:(id)a3;
- (BOOL)collidesWithView:(id)a0;
- (void)layoutSubviews;

@end
