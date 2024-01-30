@interface WFNotesAccessResource : WFAccessResource

+ (BOOL)isSystemResource;

- (unsigned long long)globalLevelStatus;
- (id)associatedAppIdentifier;
- (id)protectedResourceDescription;

@end
