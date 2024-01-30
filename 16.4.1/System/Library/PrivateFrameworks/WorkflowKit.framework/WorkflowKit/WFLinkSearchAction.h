@interface WFLinkSearchAction : WFOverridableLinkAction

- (id)overrideDescriptionSummary;
- (id)overrideLabelsByParameter;
- (id)overrideName;
- (id)overrideParameterSummary;
- (BOOL)shouldOverrideName;
- (BOOL)shouldOverrideParameterLabels;

@end
