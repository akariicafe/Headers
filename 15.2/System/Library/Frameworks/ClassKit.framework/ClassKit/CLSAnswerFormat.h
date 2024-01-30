@interface CLSAnswerFormat : CLSObject {
    long long _answerFormatType;
}

@property (readonly, nonatomic) long long answerFormatType;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (BOOL)validateObject:(id *)a0;
- (void)setAnswerFormatType:(long long)a0;

@end
