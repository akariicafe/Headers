@interface WFCalendarAccessResource : WFAccessResource

+ (unsigned long long)entityType;
+ (BOOL)isSystemResource;

- (unsigned long long)globalLevelStatus;
- (id)localizedWorkflowLevelMessageTemplate;
- (id)associatedAppIdentifier;
- (id)protectedResourceDescription;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;

@end
