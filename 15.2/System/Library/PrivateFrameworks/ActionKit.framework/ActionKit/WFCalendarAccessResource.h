@interface WFCalendarAccessResource : WFAccessResource

+ (unsigned long long)entityType;
+ (BOOL)isSystemResource;

- (unsigned long long)status;
- (id)protectedResourceDescription;
- (void)makeAvailableWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)associatedAppIdentifier;

@end
