@class NSArray;

@interface WFBluetoothTrigger : WFTrigger

@property (retain, nonatomic) NSArray *selectedDevices;
@property (nonatomic) unsigned long long selection;

+ (id)localizedDisplayName;
+ (BOOL)supportsSecureCoding;
+ (long long)triggerBacking;
+ (id)displayGlyphName;
+ (id)localizedDisplayExplanation;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
