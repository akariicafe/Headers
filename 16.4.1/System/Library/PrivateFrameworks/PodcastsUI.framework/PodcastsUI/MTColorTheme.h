@class UIColor;

@interface MTColorTheme : NSObject

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *primaryTextColor;
@property (retain, nonatomic) UIColor *secondaryTextColor;
@property (nonatomic) BOOL isBackgroundLight;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isBackgroundDark;

@end
