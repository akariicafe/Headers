@class _UITabBarItemData, UITabBarAppearance, UITabBarItemStateAppearance;

@interface UITabBarItemAppearance : NSObject <NSCopying, NSSecureCoding> {
    UITabBarItemStateAppearance *_states[5];
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic, setter=_setData:) _UITabBarItemData *_data;
@property (weak, nonatomic, setter=_setOwningAppearance:) UITabBarAppearance *_owningAppearance;
@property (readonly, nonatomic) UITabBarItemStateAppearance *highlighted;
@property (readonly, nonatomic) UITabBarItemStateAppearance *normal;
@property (readonly, nonatomic) UITabBarItemStateAppearance *selected;
@property (readonly, nonatomic) UITabBarItemStateAppearance *disabled;
@property (readonly, nonatomic) UITabBarItemStateAppearance *focused;

- (id)initWithStyle:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copy;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (void)configureWithDefaultForStyle:(long long)a0;
- (id)description;
- (void)_writeToStorage:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (void)_updateDataTo:(id)a0;
- (id)_initWithTabBarItemData:(id)a0;
- (id)initWithTabBarItemAppearance:(id)a0;
- (void)_describeInto:(id)a0;
- (id)_proxyForState:(long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
