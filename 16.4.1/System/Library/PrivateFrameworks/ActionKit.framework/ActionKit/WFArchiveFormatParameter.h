@interface WFArchiveFormatParameter : WFEnumerationParameter

- (id)possibleStates;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleState:(id)a0;
- (Class)singleStateClass;

@end
