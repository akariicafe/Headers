@interface UIAccessibilityAuditUtilities : NSObject

+ (BOOL)checkBoolValueForOptionsKey:(id)a0 inDictionary:(id)a1;
+ (id)dictionaryWithAXAuditIssue:(long long)a0 element:(id)a1 additionalInfo:(id)a2 identifier:(id)a3 foregroundColor:(id)a4 backgroundColor:(id)a5 fontSize:(id)a6 elementRect:(id)a7 text:(id)a8;
+ (id)optionsDictionaryForAuditTest:(id)a0 inDictionary:(id)a1;

@end
