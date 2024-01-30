@class TIAutocorrectionList, TIKeyboardCandidate, TIKeyboardState;

@interface TITypologyRecordRefinements : TITypologyRecord

@property (retain, nonatomic) TIKeyboardCandidate *candidate;
@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (retain, nonatomic) TIAutocorrectionList *refinements;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)shortDescription;
- (void)applyToStatistic:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)removeContextFromKeyboardState;
- (void)replaceDocumentState:(id)a0;
- (id)currentKeyboardState;
- (void)encodeWithCoder:(id)a0;

@end
