@class UIView;

@interface UICellAccessoryCustomView : UICellAccessory

@property (readonly, nonatomic) UIView *customView;
@property (readonly, nonatomic) long long placement;
@property (nonatomic) BOOL maintainsFixedSize;
@property (copy, nonatomic) id /* block */ position;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)_canDirectlyUpdateExistingAccessoryViewFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_identifier;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (long long)_defaultPlacementForHeader:(BOOL)a0;
- (BOOL)_isSystemType;
- (id)initWithCustomView:(id)a0 placement:(long long)a1;

@end
