@class NSString, NSArray, AXAuditCategoryResult, NSMutableArray;

@interface AXAuditCaseResult : AXAuditTimedResult

@property (retain, nonatomic) NSMutableArray *_mutableIssues;
@property (copy, nonatomic) NSString *caseTitle;
@property (retain, nonatomic) NSArray *auditIssues;
@property (weak, nonatomic) AXAuditCategoryResult *result;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)addAuditIssue:(id)a0;

@end
