@class UIImage;

@interface UICellAccessoryOutlineDisclosure : UICellAccessory

@property (readonly, nonatomic) double rotationAngle;
@property (retain, nonatomic, getter=_customImage, setter=_setCustomImage:) UIImage *_customImage;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ actionHandler;

+ (BOOL)supportsSecureCoding;

- (long long)_systemTypePlacementForHeader:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_canDirectlyUpdateExistingAccessoryViewFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_identifier;
- (long long)_systemType;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
