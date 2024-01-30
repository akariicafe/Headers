@class UIImage, SUControlAppearance, NSMutableDictionary;

@interface SUSegmentedControlAppearance : NSObject <NSCopying> {
    SUControlAppearance *_backgroundImages;
    NSMutableDictionary *_dividerImages;
    NSMutableDictionary *_titleTextAttributes;
}

@property (retain, nonatomic) UIImage *optionsBackgroundImage;

+ (id)defaultBarAppearance;
+ (id)defaultOptionsAppearanceForTintStyle:(long long)a0;

- (void)setDividerImage:(id)a0 forLeftSegmentState:(unsigned long long)a1 rightSegmentState:(unsigned long long)a2 barMetrics:(long long)a3;
- (id)dividerImageForLeftSegmentState:(unsigned long long)a0 rightSegmentState:(unsigned long long)a1 barMetrics:(long long)a2;
- (void)setTitleTextAttributes:(id)a0 forState:(unsigned long long)a1;
- (void)setBackgroundImage:(id)a0 forState:(unsigned long long)a1 barMetrics:(long long)a2;
- (id)titleTextAttributesForState:(unsigned long long)a0;
- (id)backgroundImageForState:(unsigned long long)a0 barMetrics:(long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)styleSegmentedControl:(id)a0;
- (id)_newDividerImageKeyWithLeftState:(unsigned long long)a0 rightState:(unsigned long long)a1 barMetrics:(long long)a2;

@end
