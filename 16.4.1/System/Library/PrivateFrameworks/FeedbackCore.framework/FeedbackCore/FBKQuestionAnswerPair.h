@class NSString;

@interface FBKQuestionAnswerPair : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *questionText;
@property (retain, nonatomic) NSString *answerText;
@property (nonatomic) BOOL isRequired;
@property (nonatomic) unsigned long long answerType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSONObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithQuestionText:(id)a0 andAnswerText:(id)a1;
- (BOOL)setPropertiesFromJSONObject:(id)a0;

@end
