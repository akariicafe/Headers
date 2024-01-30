@class UIColor, UIFont, LPPadding, LPPointUnit;

@interface LPButtonStyle : NSObject

@property (retain, nonatomic) UIColor *foregroundColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *menuBackgroundColor;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIFont *menuFont;
@property (retain, nonatomic) LPPadding *padding;
@property (retain, nonatomic) LPPadding *margin;
@property (retain, nonatomic) LPPointUnit *imagePadding;
@property (retain, nonatomic) LPPointUnit *menuMinimumWidth;
@property (retain, nonatomic) LPPointUnit *minimumWidth;
@property (retain, nonatomic) LPPointUnit *minimumHeight;
@property (retain, nonatomic) LPPointUnit *height;
@property (retain, nonatomic) LPPointUnit *additionalVerticalPadding;
@property (retain, nonatomic) LPPointUnit *indicatorSpacing;
@property (nonatomic) BOOL ignoresInvertColors;
@property (nonatomic) BOOL enableUserInteractionForDecorativeButton;
@property (nonatomic) BOOL showsChevronForSingleAction;

+ (id)systemPillButtonStyleForPlatform:(long long)a0;

- (id)init;
- (void).cxx_destruct;

@end
