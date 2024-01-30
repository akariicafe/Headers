@interface WFLinkFavoriteEntityAction : WFLinkEntityAction

+ (id)overrideInputParameterName;

- (id)verb;
- (id)entityParameterName;
- (id)overrideDefaultValuesByParameter;
- (id)overrideDescriptionSummary;
- (id)overrideLabelsByParameter;

@end
