@interface WFAppleMusicAccessResource : WFAccessResource

+ (BOOL)isSystemResource;

- (unsigned long long)status;
- (void)dealloc;
- (id)initWithDefinition:(id)a0;
- (id)protectedResourceDescription;
- (void)makeAvailableWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)associatedAppIdentifier;

@end
