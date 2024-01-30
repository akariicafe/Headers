@class TICandidateRequestToken, TIAutocorrectionList, TIKeyboardState;

@interface TITypologyRecordAutocorrections : TITypologyRecord

@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (retain, nonatomic) TICandidateRequestToken *requestToken;
@property (retain, nonatomic) TIAutocorrectionList *autocorrections;
@property (nonatomic) BOOL listUIDisplayed;

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
