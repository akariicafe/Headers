@interface WFCarPlayConnectionTrigger : WFTrigger

@property (nonatomic) BOOL onConnect;
@property (nonatomic) BOOL onDisconnect;

+ (id)localizedDisplayName;
+ (BOOL)supportsSecureCoding;
+ (id)onLabel;
+ (BOOL)isUserInitiated;
+ (id)offIcon;
+ (BOOL)isSupportedOnThisDevice;
+ (id)onIcon;
+ (id)offLabel;
+ (BOOL)isAllowedToRunAutomatically;
+ (long long)triggerBacking;
+ (id)displayGlyphName;
+ (id)localizedDisplayExplanation;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
