@class NSCharacterSet;

@interface CHOpeningClosingCharacterMatchingStep : CHPostprocessingStep

@property (retain, nonatomic) NSCharacterSet *openingBracketCharacters;
@property (retain, nonatomic) NSCharacterSet *closingBracketCharacters;
@property (retain, nonatomic) NSCharacterSet *openingQuoteCharacters;
@property (retain, nonatomic) NSCharacterSet *closingQuoteCharacters;
@property (retain, nonatomic) NSCharacterSet *symmetricQuoteCharacters;

- (id)init;
- (id)process:(id)a0;
- (void)dealloc;

@end
