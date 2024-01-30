@class UIColor;

@interface _UIListSeparatorConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=_insets, setter=_setInsets:) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _insets;
@property (nonatomic, getter=_insetsForBoundarySeparators, setter=_setInsetsForBoundarySeparators:) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _insetsForBoundarySeparators;
@property (retain, nonatomic, getter=_color, setter=_setColor:) UIColor *_color;
@property (retain, nonatomic, getter=_multipleSelectionColor, setter=_setMultipleSelectionColor:) UIColor *_multipleSelectionColor;
@property (nonatomic, getter=_shouldAdjustColorForMultipleSelection, setter=_setAdjustColorForMultipleSelection:) BOOL _adjustColorForMultipleSelection;
@property (nonatomic, getter=_hidingBehavior, setter=_setHidingBehavior:) long long _hidingBehavior;
@property (nonatomic, getter=_insetAdjustmentBehaviour, setter=_setInsetAdjustmentBehavior:) long long _insetAdjustmentBehavior;

+ (id)_configurationForAppearanceStyle:(long long)a0 inLayoutEnvironment:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)_initWithAppearanceStyle:(long long)a0 layoutEnvironment:(id)a1;
- (id)description;
- (id)_init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
