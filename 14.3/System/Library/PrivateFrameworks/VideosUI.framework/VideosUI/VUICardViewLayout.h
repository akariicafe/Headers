@class UIColor, NSShadow, TVImageLayout, VUITextLayout, VUIButtonLayout;

@interface VUICardViewLayout : NSObject

@property (nonatomic) BOOL hideFloatingBackground;
@property (retain, nonatomic) NSShadow *shadow;
@property (nonatomic) struct TVCornerRadii { double topLeft; double topRight; double bottomLeft; double bottomRight; } borderRadii;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *darkBackgroundColor;
@property (retain, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) UIColor *darkHighlightColor;
@property (nonatomic) long long imagePosition;
@property (retain, nonatomic) TVImageLayout *imageLayout;
@property (retain, nonatomic) VUITextLayout *secondaryTextLayout;
@property (retain, nonatomic) VUITextLayout *titleTextLayout;
@property (retain, nonatomic) VUITextLayout *subtitleTextLayout;
@property (retain, nonatomic) VUITextLayout *detailsTextLayout;
@property (retain, nonatomic) TVImageLayout *appImageLayout;
@property (retain, nonatomic) VUIButtonLayout *buttonLayout;

+ (double)cardHeightForElementType:(unsigned long long)a0 width:(double)a1;
+ (double)cardHeightForElementType:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;

@end
