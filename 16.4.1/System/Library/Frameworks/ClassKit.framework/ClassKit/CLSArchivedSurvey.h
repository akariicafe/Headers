@class NSString, NSArray;

@interface CLSArchivedSurvey : CLSObject <CLSRelationable> {
    long long _type;
    NSString *_title;
    NSString *_authorID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *authorID;
@property (readonly, nonatomic) NSArray *archivedSurveySteps;

+ (id)relations;
+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)addArchivedSurveyStep:(id)a0;
- (id)initWithType:(long long)a0 authorID:(id)a1;
- (void)setAuthorID:(id)a0;

@end
