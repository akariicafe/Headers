@class NSString, TIKeyboardState;

@interface TITypologyRecordGroupMarker : TITypologyRecord

@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (copy, nonatomic) NSString *textChange;

+ (BOOL)supportsSecureCoding;

- (void)removeContextFromKeyboardState;
- (void)replaceDocumentState:(id)a0;
- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)currentKeyboardState;

@end
