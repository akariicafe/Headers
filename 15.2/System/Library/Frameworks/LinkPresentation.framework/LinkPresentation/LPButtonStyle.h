@class UIColor, UIFont, LPPadding, LPPointUnit;

@interface LPButtonStyle : NSObject

@property (retain, nonatomic) UIColor *foregroundColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) LPPadding *padding;
@property (retain, nonatomic) LPPadding *margin;
@property (retain, nonatomic) LPPointUnit *minimumWidth;
@property (retain, nonatomic) LPPointUnit *height;

+ (id)systemPillButtonStyleForPlatform:(long long)a0;

- (void).cxx_destruct;
- (id)init;

@end
