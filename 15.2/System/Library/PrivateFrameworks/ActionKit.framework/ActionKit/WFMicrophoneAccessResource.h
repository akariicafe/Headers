@interface WFMicrophoneAccessResource : WFAccessResource

+ (BOOL)isSystemResource;

- (unsigned long long)status;
- (id)icon;
- (id)name;
- (id)protectedResourceDescription;
- (void)makeAvailableWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;

@end
