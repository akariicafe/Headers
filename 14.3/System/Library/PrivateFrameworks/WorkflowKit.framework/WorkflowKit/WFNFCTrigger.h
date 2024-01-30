@class NSString;

@interface WFNFCTrigger : WFTrigger

@property (copy, nonatomic) NSString *tagIdentifier;
@property (copy, nonatomic) NSString *name;

+ (BOOL)isSupportedOnThisDevice;
+ (BOOL)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (BOOL)isUserInitiated;
+ (BOOL)isAllowedToRunAutomatically;
+ (id)localizedDisplayExplanation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
