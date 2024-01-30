@class NSString;

@interface WFIntentsAccessResource : WFAccessResource {
    NSString *_associatedAppIdentifier;
}

+ (id)persistentIdentifierFromBundleIdentifier:(id)a0;
+ (id)bundleIdentifierFromPersistentIdentifier:(id)a0;
+ (BOOL)isSystemResource;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0 persistentIdentifier:(id)a1;
- (id)initWithBundleIdentifierForDisplay:(id)a0;
- (unsigned long long)globalLevelStatus;
- (id)localizedWorkflowLevelNotDeterminedStatusMessage;
- (id)localizedWorkflowLevelDeniedStatusMessage;
- (id)localizedWorkflowLevelPromptTemplate;
- (id)localizedWorkflowLevelMessageTemplate;
- (id)associatedAppIdentifier;

@end
