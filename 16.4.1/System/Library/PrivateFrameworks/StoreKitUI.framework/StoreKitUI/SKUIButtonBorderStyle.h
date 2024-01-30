@class IKColor, NSString;

@interface SKUIButtonBorderStyle : NSObject <NSCopying>

@property (copy, nonatomic) IKColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) struct IKCornerRadii { double bottomLeft; double bottomRight; double topLeft; double topRight; } cornerRadii;
@property (copy, nonatomic) IKColor *fillColor;
@property (copy, nonatomic) NSString *namedCornerStyle;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)_usesBackgroundWithAlpha:(id)a0;
- (id)bezierPathWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithElementStyle:(id)a0;

@end
