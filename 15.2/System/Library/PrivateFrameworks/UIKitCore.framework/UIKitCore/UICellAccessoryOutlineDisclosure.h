@class UIImage;

@interface UICellAccessoryOutlineDisclosure : UICellAccessory

@property (readonly, nonatomic) double rotationAngle;
@property (retain, nonatomic, getter=_customImage, setter=_setCustomImage:) UIImage *_customImage;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ actionHandler;

+ (BOOL)supportsSecureCoding;

- (long long)_systemTypePlacementForHeader:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)_systemType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_identifier;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
