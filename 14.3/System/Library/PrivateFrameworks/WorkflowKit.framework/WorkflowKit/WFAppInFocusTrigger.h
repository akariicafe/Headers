@class NSArray;

@interface WFAppInFocusTrigger : WFTrigger

@property (copy, nonatomic) NSArray *selectedBundleIdentifiers;
@property (nonatomic) BOOL onFocus;
@property (nonatomic) BOOL onBackground;

+ (BOOL)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (BOOL)isUserInitiated;
+ (BOOL)isAllowedToRunAutomatically;
+ (id)localizedDisplayExplanation;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
