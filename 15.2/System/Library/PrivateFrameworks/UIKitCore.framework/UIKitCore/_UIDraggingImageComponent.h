@class UIImage, UIView;

@interface _UIDraggingImageComponent : NSObject <NSCopying>

@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly, nonatomic) BOOL ignoresAccessibilityFilters;
@property (readonly, nonatomic) BOOL hidesImage;

- (id)initWithView:(id)a0;
- (id)description;
- (id)initHidingDragImage;
- (id)_initWithNoImageAndFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithImage:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ignoreAccessibilityFilters:(BOOL)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
