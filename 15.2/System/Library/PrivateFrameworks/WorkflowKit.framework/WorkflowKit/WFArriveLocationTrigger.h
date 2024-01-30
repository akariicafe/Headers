@interface WFArriveLocationTrigger : WFLocationTrigger

+ (id)localizedDisplayName;
+ (long long)triggerBacking;
+ (id)localizedDisplayExplanation;
+ (id)displayGlyph;

- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;

@end
