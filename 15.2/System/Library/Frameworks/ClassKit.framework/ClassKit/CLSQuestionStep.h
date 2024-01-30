@class NSString, CLSAnswerFormat;

@interface CLSQuestionStep : CLSSurveyStep <CLSRelationable> {
    NSString *_questionText;
    long long _displayOrder;
    long long _questionType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long questionType;
@property (copy, nonatomic) NSString *questionText;
@property (retain, nonatomic) CLSAnswerFormat *answerFormat;
@property (nonatomic) long long displayOrder;

+ (BOOL)supportsSecureCoding;
+ (id)relations;

- (void)encodeWithCoder:(id)a0;
- (void)mergeWithObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)validateObject:(id *)a0;
- (id)initWithQuestionText:(id)a0 answerFormat:(id)a1;

@end
