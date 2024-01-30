@interface WFNotesAccessResource : WFAccessResource

+ (BOOL)isSystemResource;

- (unsigned long long)status;
- (id)protectedResourceDescription;
- (id)associatedAppIdentifier;

@end
