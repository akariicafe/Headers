@class UIColor, UIFont, LPPadding;

@interface LPButtonStyle : NSObject

@property (retain, nonatomic) UIColor *foregroundColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) LPPadding *padding;
@property (retain, nonatomic) LPPadding *margin;

+ (id)systemPillButtonStyleForPlatform:(long long)a0;

- (id)init;
- (void).cxx_destruct;

@end
