@class UIFont;

@interface HUNavigationButtonLayoutOptions : NSObject <NSCopying>

@property (retain, nonatomic) UIFont *font;
@property (nonatomic) double minTextButtonWidth;

+ (id)defaultOptionsForViewSizeSubclass:(long long)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
