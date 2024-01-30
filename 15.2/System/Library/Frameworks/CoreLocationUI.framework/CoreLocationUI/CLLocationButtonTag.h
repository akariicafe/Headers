@class UIColor, UISSlotStyle;

@interface CLLocationButtonTag : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double fontSize;
@property (nonatomic) long long label;
@property (nonatomic) long long icon;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (retain, nonatomic) UISSlotStyle *style;
@property (nonatomic) BOOL renderedSuccessfully;
@property (readonly, nonatomic) double buttonWidth;
@property (readonly, nonatomic) double buttonHeight;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (double)buttonHeight;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)buttonWidth;
- (id)initWithLabel:(long long)a0 iconType:(long long)a1 backgroundColor:(id)a2 tintColor:(id)a3 cornerRadius:(double)a4 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 fontSize:(double)a6;
- (BOOL)contrastValidForBgColorAndFgTextWithCumulativeOpacity:(float)a0;

@end
