@class UIImage, UIColor;

@interface _UICellAccessoryConfigurationOutlineDisclosure : _UICellAccessoryConfiguration

@property (readonly, nonatomic) UIImage *_customImage;
@property (readonly, nonatomic) BOOL cellSelectionTogglesExpansionState;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) double rotationAngle;
@property (retain, nonatomic) UIColor *selectedTintColor;

+ (BOOL)supportsSecureCoding;
+ (id)new;

- (id)initWithImage:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCellSelectionTogglesExpansionState:(BOOL)a0;
- (long long)_systemType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_identifier;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
