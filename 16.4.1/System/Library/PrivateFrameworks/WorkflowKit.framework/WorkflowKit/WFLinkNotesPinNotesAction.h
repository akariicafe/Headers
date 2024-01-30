@interface WFLinkNotesPinNotesAction : WFLinkFavoriteEntityAction

- (id)overrideDescriptionSummary;
- (id)overrideLabelsByParameter;
- (id)overrideName;
- (id)overrideParameterSummary;
- (BOOL)shouldOverrideParameterLabels;

@end
