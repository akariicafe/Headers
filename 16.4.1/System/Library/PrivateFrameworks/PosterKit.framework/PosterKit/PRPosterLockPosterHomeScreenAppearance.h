@interface PRPosterLockPosterHomeScreenAppearance : PRPosterHomeScreenAppearance

@property (readonly, nonatomic, getter=isLegibilityBlurEnabled) BOOL legibilityBlurEnabled;
@property (readonly, nonatomic) BOOL allowsModifyingLegibilityBlur;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)copyByTogglingLegibilityBlurEnabled;
- (BOOL)isEqual:(id)a0;
- (id)initWithLegibilityBlurEnabled:(BOOL)a0 allowsModifyingLegibilityBlur:(BOOL)a1;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)copyWithLegibilityBlurEnabled:(BOOL)a0;

@end
