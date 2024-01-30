@class NSCharacterSet;

@interface CHOpeningClosingCharacterMatchingStep : CHPostprocessingStepModifyingOriginalTokens

@property (retain, nonatomic) NSCharacterSet *openingBracketCharacters;
@property (retain, nonatomic) NSCharacterSet *closingBracketCharacters;
@property (retain, nonatomic) NSCharacterSet *openingQuoteCharacters;
@property (retain, nonatomic) NSCharacterSet *closingQuoteCharacters;
@property (retain, nonatomic) NSCharacterSet *symmetricQuoteCharacters;

- (id)init;
- (void).cxx_destruct;
- (id)process:(id)a0 options:(id)a1;

@end
