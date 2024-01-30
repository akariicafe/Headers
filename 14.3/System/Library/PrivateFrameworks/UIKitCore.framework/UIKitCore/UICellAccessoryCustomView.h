@class UIView;

@interface UICellAccessoryCustomView : UICellAccessory

@property (readonly, nonatomic) UIView *customView;
@property (readonly, nonatomic) long long placement;
@property (nonatomic) BOOL maintainsFixedSize;
@property (copy, nonatomic) id /* block */ position;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_identifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (long long)_defaultPlacementForHeader:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCustomView:(id)a0 placement:(long long)a1;
- (BOOL)_isSystemType;
- (void)encodeWithCoder:(id)a0;

@end
