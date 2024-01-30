@class TIKeyboardOutput, TIKeyboardInput, TIKeyboardState, TIKeyboardConfiguration;

@interface TITypologyRecordKeyboardInput : TITypologyRecord

@property (retain, nonatomic) TIKeyboardInput *input;
@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (retain, nonatomic) TIKeyboardOutput *output;
@property (retain, nonatomic) TIKeyboardConfiguration *keyboardConfig;

+ (BOOL)supportsSecureCoding;

- (void)removeContextFromKeyboardState;
- (void)replaceDocumentState:(id)a0;
- (id)shortDescription;
- (id)textSummary;
- (void)encodeWithCoder:(id)a0;
- (void)applyToStatistic:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)changedText;
- (id)currentKeyboardState;

@end
