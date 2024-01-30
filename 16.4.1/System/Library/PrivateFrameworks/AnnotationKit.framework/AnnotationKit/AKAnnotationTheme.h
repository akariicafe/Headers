@class UIColor, UIFont;

@interface AKAnnotationTheme : NSObject

@property (nonatomic) int pageTheme;
@property (readonly, nonatomic) int annotationStyle;
@property (readonly, nonatomic) BOOL isUnderline;
@property (readonly, nonatomic) UIColor *highlightColor;
@property (readonly, nonatomic) UIColor *noteFillColor;
@property (readonly, nonatomic) UIColor *noteBorderColor;
@property (readonly, nonatomic) double noteShadowRadius;
@property (readonly, nonatomic) double noteShadowOpacity;
@property (readonly, nonatomic) UIColor *noteShadowColor;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } noteShadowOffset;
@property (readonly, nonatomic) UIColor *notesSidebarBarColor;
@property (readonly, nonatomic) UIColor *notesSidebarTextColor;
@property (readonly, nonatomic) UIFont *noteTextFont;
@property (readonly, nonatomic) UIFont *noteTextFontInTable;
@property (readonly, nonatomic) UIColor *noteTextColor;
@property (readonly, nonatomic) UIColor *noteMarkerFillColor;
@property (readonly, nonatomic) UIColor *noteMarkerBorderColor;
@property (readonly, nonatomic) UIColor *noteMarkerStrikethroughColor;

+ (id)underlineTheme:(int)a0;
+ (id)blueTheme:(int)a0;
+ (id)colorForAnnotationStyle:(int)a0 propertyName:(id)a1 pageTheme:(int)a2;
+ (id)colorForThemeItem:(id)a0 pageTheme:(int)a1;
+ (id)greenTheme:(int)a0;
+ (id)highlightTextColor:(int)a0;
+ (id)pinkTheme:(int)a0;
+ (id)purpleTheme:(int)a0;
+ (id)theme:(int)a0;
+ (id)themeDescriptions;
+ (id)themeForAnnotationStyle:(int)a0 pageTheme:(int)a1;
+ (id)themeForAnnotationStyle:(int)a0 pageTheme:(int)a1 isUnderline:(BOOL)a2;
+ (id)themeItemForAnnotationStyle:(int)a0 propertyName:(id)a1;
+ (id)yellowTheme:(int)a0;

@end
