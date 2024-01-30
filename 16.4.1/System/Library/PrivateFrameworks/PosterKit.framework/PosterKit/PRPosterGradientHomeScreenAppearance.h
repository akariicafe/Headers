@class PRPosterColor, PREditorColorPickerConfiguration, NSArray;

@interface PRPosterGradientHomeScreenAppearance : PRPosterHomeScreenAppearance

@property (readonly, copy, nonatomic) PRPosterColor *color;
@property (readonly, copy, nonatomic) PREditorColorPickerConfiguration *colorPickerConfiguration;
@property (readonly, copy, nonatomic) PRPosterColor *effectiveColor;
@property (readonly, copy, nonatomic) NSArray *gradientColors;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithColor:(id)a0 colorPickerConfiguration:(id)a1;
- (void).cxx_destruct;

@end
