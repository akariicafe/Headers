@class NSMutableDictionary;

@interface UIKBAutoFillTestExpectedResult : NSObject <NSCoding> {
    NSMutableDictionary *_textFieldTagToTextFieldType;
}

@property (nonatomic) long long formType;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (long long)typeForTextFieldWithTag:(long long)a0;
- (void)setType:(long long)a0 forTextFieldWithTag:(long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
