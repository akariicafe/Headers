@class NSCharacterSet;

@interface CHTransliterateHalfWidthPunctuationStep : CHPostprocessingStep

@property (nonatomic) BOOL shouldAddAlternatives;
@property (retain, nonatomic) NSCharacterSet *contextInvariantCharacterSet;
@property (retain, nonatomic) NSCharacterSet *forwardLookingCharacterSet;
@property (retain, nonatomic) NSCharacterSet *backwardLookingCharacterSet;
@property (retain, nonatomic) NSCharacterSet *widthAlternativeCharacterSet;

- (id)process:(id)a0;
- (void)dealloc;
- (id)initShouldAddAlternatives:(BOOL)a0;

@end
