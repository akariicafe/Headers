@class TIAutocorrectionList, TIKeyboardCandidate, TIKeyboardState;

@interface TITypologyRecordRefinements : TITypologyRecord

@property (retain, nonatomic) TIKeyboardCandidate *candidate;
@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (retain, nonatomic) TIAutocorrectionList *refinements;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void)replaceDocumentState:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (void)removeContextFromKeyboardState;
- (void)applyToStatistic:(id)a0;
- (void).cxx_destruct;
- (id)currentKeyboardState;

@end
