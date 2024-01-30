@class TIKeyboardTouchEvent, TIKeyboardLayout, TIKeyboardState;

@interface TITypologyRecordSkipHitTest : TITypologyRecord

@property (retain, nonatomic) TIKeyboardTouchEvent *touchEvent;
@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (retain, nonatomic) TIKeyboardLayout *keyLayout;

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
