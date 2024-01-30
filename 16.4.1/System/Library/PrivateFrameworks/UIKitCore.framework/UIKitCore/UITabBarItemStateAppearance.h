@class UIColor, NSArray, NSDictionary, _UITabBarItemData, UITabBarItemAppearance;

@interface UITabBarItemStateAppearance : NSObject {
    UITabBarItemAppearance *_owner;
    long long _state;
}

@property (retain, nonatomic, setter=_setData:) _UITabBarItemData *_data;
@property (copy, nonatomic) NSArray *itemEffects;
@property (copy, nonatomic) NSDictionary *titleTextAttributes;
@property (nonatomic) struct UIOffset { double x0; double x1; } titlePositionAdjustment;
@property (copy, nonatomic) UIColor *iconColor;
@property (nonatomic) struct UIOffset { double x0; double x1; } badgePositionAdjustment;
@property (copy, nonatomic) UIColor *badgeBackgroundColor;
@property (copy, nonatomic) NSDictionary *badgeTextAttributes;
@property (nonatomic) struct UIOffset { double x0; double x1; } badgeTitlePositionAdjustment;

- (void)_writeToStorage:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_clearOwner;
- (id)_initWithOwner:(id)a0 data:(id)a1 state:(long long)a2;

@end
