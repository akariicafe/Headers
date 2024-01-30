@class UIColor, UIVisualEffect;

@interface UIListSeparatorConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=_ignoreBottomSeparatorInsetsFromCell, setter=_setIgnoreBottomSeparatorInsetsFromCell:) BOOL _ignoreBottomSeparatorInsetsFromCell;
@property (nonatomic, getter=_ignoreTopSeparatorInsetsFromCell, setter=_setIgnoreTopSeparatorInsetsFromCell:) BOOL _ignoreTopSeparatorInsetsFromCell;
@property (copy, nonatomic, getter=_visualEffect, setter=_setVisualEffect:) UIVisualEffect *_visualEffect;
@property (nonatomic) long long topSeparatorVisibility;
@property (nonatomic) long long bottomSeparatorVisibility;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } topSeparatorInsets;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } bottomSeparatorInsets;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIColor *multipleSelectionColor;
@property (copy, nonatomic) UIVisualEffect *visualEffect;

- (void)_setMultipleSelectionColor:(id)a0;
- (void)_replaceAutomaticValuesWithValuesFromConfiguration:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_setInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)description;
- (void)_setColor:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_insets;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithListAppearance:(long long)a0;
- (id)__copyWithSubclass:(Class)a0 inZone:(struct _NSZone { } *)a1;
- (unsigned long long)hash;
- (id)_multipleSelectionColor;
- (id)_color;

@end
