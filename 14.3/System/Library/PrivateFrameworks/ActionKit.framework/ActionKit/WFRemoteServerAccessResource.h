@class NSArray;

@interface WFRemoteServerAccessResource : WFGranularAccessResource

@property (copy, nonatomic) NSArray *requestedURLs;

+ (BOOL)isSystemResource;
+ (Class)perWorkflowStateClass;

- (void).cxx_destruct;
- (id)icon;
- (id)name;
- (unsigned long long)globalLevelStatus;
- (id)localizedWorkflowLevelNotDeterminedStatusMessage;
- (id)localizedWorkflowLevelDeniedStatusMessage;
- (id)localizedWorkflowLevelPromptTemplate;
- (id)localizedWorkflowLevelMessageTemplate;
- (id)requestedEntries;

@end
