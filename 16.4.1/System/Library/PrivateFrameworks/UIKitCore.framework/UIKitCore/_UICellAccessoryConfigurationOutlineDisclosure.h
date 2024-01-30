@class UIImage, UIColor;

@interface _UICellAccessoryConfigurationOutlineDisclosure : _UICellAccessoryConfiguration

@property (readonly, nonatomic) UIImage *_customImage;
@property (readonly, nonatomic) BOOL cellSelectionTogglesExpansionState;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) double rotationAngle;
@property (retain, nonatomic) UIColor *selectedTintColor;

+ (BOOL)supportsSecureCoding;
+ (id)new;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithImage:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_identifier;
- (long long)_systemType;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCellSelectionTogglesExpansionState:(BOOL)a0;

@end
