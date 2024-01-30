@interface UICellAccessoryReorder : UICellAccessory

@property (nonatomic) BOOL showsVerticalSeparator;

+ (BOOL)supportsSecureCoding;

- (long long)_systemTypePlacementForHeader:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)_systemType;
- (BOOL)isEqual:(id)a0;
- (id)_identifier;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
