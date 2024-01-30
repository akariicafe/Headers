@class NSString, NSArray;

@interface WFMessageTrigger : WFTrigger

@property (retain, nonatomic) NSString *selectedContents;
@property (retain, nonatomic) NSArray *selectedSenders;
@property (retain, nonatomic) NSArray *selectedSendersStrings;

+ (BOOL)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (BOOL)isAllowedToRunAutomatically;
+ (id)localizedDisplayExplanation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (id)localizedDescriptionWithConfigurationSummaryWithCount:(unsigned long long)a0;
- (BOOL)hasValidConfiguration;

@end
