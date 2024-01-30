@class UIImage;

@interface UICellAccessoryOutlineDisclosure : UICellAccessory

@property (readonly, nonatomic) double rotationAngle;
@property (readonly, nonatomic) UIImage *_customImage;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ actionHandler;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_identifier;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (long long)_systemType;
- (void)encodeWithCoder:(id)a0;
- (long long)_systemTypePlacementForHeader:(BOOL)a0;

@end
