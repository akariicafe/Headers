@interface WFCameraAccessResource : WFAccessResource

+ (BOOL)isSystemResource;

- (unsigned long long)status;
- (id)protectedResourceDescription;
- (void)makeAvailableWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)associatedAppIdentifier;
- (id)errorReasonForStatus:(unsigned long long)a0;
- (id)importErrorReasonForStatus:(unsigned long long)a0;

@end
