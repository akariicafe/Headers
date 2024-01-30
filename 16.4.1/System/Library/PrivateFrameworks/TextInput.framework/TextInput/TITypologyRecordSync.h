@class TIKeyboardConfiguration, TIKeyboardState;

@interface TITypologyRecordSync : TITypologyRecord

@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (retain, nonatomic) TIKeyboardConfiguration *keyboardConfig;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void)replaceDocumentState:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (void)removeContextFromKeyboardState;
- (id)textSummary;
- (void)applyToStatistic:(id)a0;
- (void).cxx_destruct;
- (id)currentKeyboardState;

@end
