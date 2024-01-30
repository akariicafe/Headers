@interface UICellAccessoryReorder : UICellAccessory

@property (nonatomic) BOOL showsVerticalSeparator;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_identifier;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (long long)_systemType;
- (void)encodeWithCoder:(id)a0;
- (long long)_systemTypePlacementForHeader:(BOOL)a0;

@end
