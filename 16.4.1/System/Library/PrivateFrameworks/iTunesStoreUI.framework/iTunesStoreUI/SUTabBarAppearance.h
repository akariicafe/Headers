@class UIImage, NSMutableDictionary;

@interface SUTabBarAppearance : NSObject <NSCopying> {
    NSMutableDictionary *_titleTextAttributes;
}

@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) UIImage *dividerImage;
@property (retain, nonatomic) UIImage *selectedDividerImage;
@property (retain, nonatomic) UIImage *selectionIndicatorImage;
@property (nonatomic) double tabBarButtonSpacing;
@property (nonatomic) double tabBarButtonWidth;

- (void)setTitleTextAttributes:(id)a0 forState:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)titleTextAttributesForState:(unsigned long long)a0;
- (void)enumerateTitleTextAttributesUsingBlock:(id /* block */)a0;

@end
