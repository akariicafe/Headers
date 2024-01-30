@class NSArray;

@interface WFMakeImageFromPDFPageImageFormatParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

- (id)possibleStates;
- (void).cxx_destruct;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)readableStringFromFileTypeString:(id)a0;

@end
