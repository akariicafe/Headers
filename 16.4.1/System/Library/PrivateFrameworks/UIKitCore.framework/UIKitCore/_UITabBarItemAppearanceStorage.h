@class UIColor, NSMutableDictionary;

@interface _UITabBarItemAppearanceStorage : _UIBarItemAppearanceStorage {
    NSMutableDictionary *_badgeTextAttributesForState;
}

@property (nonatomic) struct UIOffset { double horizontal; double vertical; } titleOffset;
@property (copy, nonatomic) UIColor *badgeColor;

- (id)badgeTextAttributesForState:(unsigned long long)a0;
- (void)setBadgeTextAttributes:(id)a0 forState:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)enumerateBadgeTextAttributesWithBlock:(id /* block */)a0;

@end
