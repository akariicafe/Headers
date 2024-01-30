@class NSString, NSArray, NSDate;

@interface CLSSurvey : CLSObject <CLSRelationable> {
    long long _type;
    NSString *_title;
    NSString *_authorID;
    NSString *_serverETag;
    NSDate *_teacherLastModifiedDate;
    NSDate *_studentFirstSubmissionDate;
    long long _surveyUpdateStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *authorID;
@property (readonly, nonatomic) NSArray *surveySteps;
@property (readonly, nonatomic) long long surveyUpdateStatus;

+ (id)relations;
+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)mergeWithObject:(id)a0;
- (BOOL)validateObject:(id *)a0;
- (void)addSurveyStep:(id)a0;
- (id)initWithType:(long long)a0 authorID:(id)a1;
- (BOOL)questionArraysEqual:(id)a0;
- (void)removeSurveyStep:(id)a0;
- (id)serverETag;
- (void)setAuthorID:(id)a0;
- (void)setServerETag:(id)a0;
- (void)setStudentFirstSubmissionDate:(id)a0;
- (void)setSurveyUpdateStatus:(long long)a0;
- (void)setTeacherLastModifiedDate:(id)a0;
- (id)studentFirstSubmissionDate;
- (id)teacherLastModifiedDate;

@end
