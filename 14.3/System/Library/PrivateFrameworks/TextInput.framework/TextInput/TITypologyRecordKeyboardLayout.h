@class TIKeyboardLayout, NSString;

@interface TITypologyRecordKeyboardLayout : TITypologyRecord

@property (retain, nonatomic) TIKeyboardLayout *keyboardLayout;
@property (copy, nonatomic) NSString *name;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)shortDescription;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
