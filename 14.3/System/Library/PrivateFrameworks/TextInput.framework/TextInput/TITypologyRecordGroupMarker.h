@class NSString, TIKeyboardState;

@interface TITypologyRecordGroupMarker : TITypologyRecord

@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (copy, nonatomic) NSString *textChange;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)shortDescription;
- (id)initWithCoder:(id)a0;
- (void)removeContextFromKeyboardState;
- (void)replaceDocumentState:(id)a0;
- (id)currentKeyboardState;
- (void)encodeWithCoder:(id)a0;

@end
