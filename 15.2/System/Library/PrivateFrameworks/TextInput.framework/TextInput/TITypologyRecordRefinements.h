@class TIAutocorrectionList, TIKeyboardCandidate, TIKeyboardState;

@interface TITypologyRecordRefinements : TITypologyRecord

@property (retain, nonatomic) TIKeyboardCandidate *candidate;
@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (retain, nonatomic) TIAutocorrectionList *refinements;

+ (BOOL)supportsSecureCoding;

- (void)removeContextFromKeyboardState;
- (void)replaceDocumentState:(id)a0;
- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (void)applyToStatistic:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)currentKeyboardState;

@end
