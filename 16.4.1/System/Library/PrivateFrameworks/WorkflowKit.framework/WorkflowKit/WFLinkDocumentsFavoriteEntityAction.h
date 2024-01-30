@interface WFLinkDocumentsFavoriteEntityAction : WFLinkFavoriteEntityAction

- (void)getValueForParameterData:(id)a0 ofProcessedParameters:(id)a1 completionHandler:(id /* block */)a2;
- (id)overrideDescriptionSummary;
- (id)overrideName;
- (id)overrideParameterSummary;
- (id)parameterOverrides;

@end
