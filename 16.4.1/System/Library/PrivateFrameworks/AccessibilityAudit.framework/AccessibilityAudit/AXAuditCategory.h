@class NSSet, NSString, NSDictionary, AXAuditCaseResult, NSArray, NSMutableArray, AXAuditCategoryResult;
@protocol AXAuditCategoryDelegate;

@interface AXAuditCategory : NSObject

@property (class, readonly, nonatomic) NSDictionary *axAuditTestTypeToLocalIssueTypeMapping;

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AXAuditCaseResult *currentCaseResult;
@property (retain, nonatomic) NSArray *caseSelectorsForAuditing;
@property (retain, nonatomic) NSMutableArray *_currentTestingCaseSelectors;
@property (retain, nonatomic) AXAuditCategoryResult *_result;
@property (weak, nonatomic) id<AXAuditCategoryDelegate> delegate;
@property (nonatomic) int targetPid;
@property (nonatomic) unsigned long long categoryType;
@property (readonly, nonatomic) NSSet *allSupportedAuditTypes;
@property (retain, nonatomic) NSSet *currentAuditTypesToTestFor;
@property (retain, nonatomic) NSString *lastCaseSelectorName;

- (void)run;
- (id)result;
- (void)stop;
- (id)init;
- (void)start;
- (id)description;
- (void).cxx_destruct;
- (id)_availableCasesDescription;
- (BOOL)_isAppleInternalBuild;
- (void)addIssueWithClassification:(long long)a0 auditElement:(id)a1;
- (void)addIssueWithClassification:(long long)a0 auditElement:(id)a1 elementRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 elementDescription:(id)a3;
- (void)addIssueWithClassification:(long long)a0 auditElement:(id)a1 elementRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 elementDescription:(id)a3 mlGeneratedDescription:(id)a4;
- (void)addIssueWithClassification:(long long)a0 auditElement:(id)a1 elementRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 elementDescription:(id)a3 mlGeneratedDescription:(id)a4 longDescExtraInfo:(id)a5 elementText:(id)a6;
- (void)caseEndedForSelectorName:(id)a0 result:(id)a1;
- (id)caseStartedForSelectorName:(id)a0;
- (BOOL)localIssueShouldRun:(id)a0;
- (BOOL)shouldRunAuditTestType:(id)a0;
- (BOOL)supportAuditGroup:(unsigned long long)a0;
- (BOOL)supportsAuditTestType:(id)a0;

@end
