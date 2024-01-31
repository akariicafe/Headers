@class NSString, NSArray, CLSArchivedAnswerFormat;

@interface CLSArchivedQuestionStep : CLSArchivedSurveyStep <CLSRelationable, CLSAssetAdopter> {
    NSString *_questionText;
    long long _displayOrder;
    long long _questionType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *questionText;
@property (retain, nonatomic) CLSArchivedAnswerFormat *archivedAnswerFormat;
@property (readonly, nonatomic) long long questionType;
@property (nonatomic) long long displayOrder;
@property (readonly, nonatomic) NSArray *assets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)relations;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setQuestionType:(long long)a0;
- (id)initWithQuestionText:(id)a0 answerFormat:(id)a1;

@end
