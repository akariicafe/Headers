@class NSString;

@interface TRINSExpressionAssignmentLanguage : TRIPBMessage

@property (copy, nonatomic) NSString *assignmentExpression;
@property (nonatomic) BOOL hasAssignmentExpression;
@property (nonatomic) unsigned int schemaVersion;
@property (nonatomic) BOOL hasSchemaVersion;

+ (id)descriptor;

@end
