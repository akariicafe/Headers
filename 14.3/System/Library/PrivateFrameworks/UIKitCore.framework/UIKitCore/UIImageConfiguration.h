@class NSString, UITraitCollection;

@interface UIImageConfiguration : NSObject <UIImageConfiguration, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL _ignoresDynamicType;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)configurationWithTraitCollection:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isUnspecified;
- (id)configurationByApplyingConfiguration:(id)a0;
- (id)_initWithTraitCollection:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_configurationIgnoringDynamicType;
- (id)_init;
- (BOOL)isEqual:(id)a0;
- (void)_applyConfigurationValuesTo:(id)a0;
- (BOOL)isEquivalentToConfiguration:(id)a0;
- (BOOL)_shouldApplyConfiguration:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
