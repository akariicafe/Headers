@class UIColor, NSMutableDictionary;

@interface SUToolbarAppearance : NSObject <NSCopying> {
    NSMutableDictionary *_backgroundImages;
    NSMutableDictionary *_shadowImages;
}

@property (retain, nonatomic) UIColor *tintColor;

+ (id)defaultToolbarAppearance;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)styleToolbar:(id)a0;
- (id)backgroundImageForPosition:(long long)a0 barMetrics:(long long)a1;
- (void)enumerateBackgroundImagesUsingBlock:(id /* block */)a0;
- (void)enumerateShadowImagesUsingBlock:(id /* block */)a0;
- (void)setBackgroundImage:(id)a0 forPosition:(long long)a1 barMetrics:(long long)a2;
- (void)setShadowImage:(id)a0 forPosition:(long long)a1;
- (id)shadowImageForPosition:(long long)a0;

@end
