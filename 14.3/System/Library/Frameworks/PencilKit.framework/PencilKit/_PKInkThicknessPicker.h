@class NSArray, NSString;

@interface _PKInkThicknessPicker : UIControl

@property (retain, nonatomic) NSArray *thicknessButtons;
@property (retain, nonatomic) NSString *inkIdentifier;
@property (nonatomic) double weight;

+ (long long)_nearestButtonIndexForWeight:(double)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_buttonFrameForButtonIndex:(long long)a0;
+ (double)_weightForButtonIndex:(long long)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_buttonFrameForWeight:(double)a0;
+ (double)_weightForButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (double)_nearestButtonWeightForWeight:(double)a0;

- (void).cxx_destruct;
- (void)buttonTapped:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithInkIdentifier:(id)a0;

@end
