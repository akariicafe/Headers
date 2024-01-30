@class NSArray, NSString;

@interface WFEmailTrigger : WFTrigger

@property (retain, nonatomic) NSArray *selectedAccountIdentifiers;
@property (retain, nonatomic) NSArray *selectedAccountDescriptions;
@property (retain, nonatomic) NSString *selectedSubject;
@property (retain, nonatomic) NSArray *selectedRecipients;
@property (retain, nonatomic) NSArray *selectedSenders;

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
