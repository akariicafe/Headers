@interface CLSAnswerFormat : CLSAbstractAnswerFormat {
    long long _answerFormatType;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)init;
- (BOOL)validateObject:(id *)a0;
- (long long)answerFormatType;
- (void)setAnswerFormatType:(long long)a0;

@end
