@interface AXAuditIssueDescriptionManager : NSObject

+ (id)sharedManager;
+ (id)_auditIssueTypeToLocalizationKeyLookup;
+ (id)allAuditIssueClassificationCodes;

- (id)longDescExtraInfoForAuditIssue:(id)a0;
- (id)_locKeyForAuditIssueClassification:(long long)a0;
- (id)_locKeyWithSuffix:(id)a0 issueClassification:(long long)a1;
- (id)_locStringForIssue:(id)a0 suffix:(id)a1;
- (id)_locStringForKey:(id)a0;
- (BOOL)isContrastTypeIssue:(long long)a0;
- (id)longDescriptionForAuditIssue:(id)a0;
- (id)shortTitleForAuditIssue:(id)a0;
- (id)suggestionDescriptionForAuditIssue:(id)a0;

@end
