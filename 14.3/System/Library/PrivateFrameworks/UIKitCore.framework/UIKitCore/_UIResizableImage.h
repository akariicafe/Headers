@interface _UIResizableImage : UIImage {
    BOOL _alwaysStretches;
    BOOL _isSubimage;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _subimageInsets;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _capInsets;
}

+ (BOOL)supportsSecureCoding;

- (void)_setSubimageInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentRectInPixels;
- (BOOL)_isTiledWhenStretchedToSize:(struct CGSize { double x0; double x1; })a0;
- (long long)resizingMode;
- (id)_resizableImageWithCapMask:(int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentStretchInPixels;
- (id)initWithCoder:(id)a0;
- (void)_setAlwaysStretches:(BOOL)a0;
- (BOOL)_isSubimage;
- (BOOL)isEqual:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentInsetsInPixels:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 emptySizeFallback:(id /* block */)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })capInsets;
- (BOOL)_suppressesAccessibilityHairlineThickening;
- (void)_configureImage:(id)a0 assumePreconfigured:(BOOL)a1;
- (id)initWithImage:(id)a0 capInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (BOOL)_isResizable;
- (void)_setCapInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)encodeWithCoder:(id)a0;

@end
