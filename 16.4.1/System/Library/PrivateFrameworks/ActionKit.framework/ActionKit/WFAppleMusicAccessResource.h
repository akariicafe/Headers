@interface WFAppleMusicAccessResource : WFAccessResource

+ (BOOL)isSystemResource;

- (id)initWithDefinition:(id)a0;
- (void)dealloc;
- (unsigned long long)status;
- (id)associatedAppIdentifier;
- (void)makeAvailableWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)protectedResourceDescription;

@end
