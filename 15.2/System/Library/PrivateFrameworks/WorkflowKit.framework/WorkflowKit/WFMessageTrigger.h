@class NSString, NSArray;

@interface WFMessageTrigger : WFTrigger

@property (retain, nonatomic) NSString *selectedContents;
@property (retain, nonatomic) NSArray *selectedSenders;
@property (retain, nonatomic) NSArray *selectedSendersStrings;

+ (id)localizedDisplayName;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isAllowedToRunAutomatically;
+ (long long)triggerBacking;
+ (id)displayGlyphTintColor;
+ (id)localizedDisplayExplanation;
+ (id)displayGlyph;
+ (id)messagesGreen;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (id)localizedDescriptionWithConfigurationSummaryWithCount:(unsigned long long)a0;
- (BOOL)hasValidConfiguration;

@end
