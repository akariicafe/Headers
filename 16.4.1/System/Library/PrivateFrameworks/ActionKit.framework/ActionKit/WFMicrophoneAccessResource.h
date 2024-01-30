@interface WFMicrophoneAccessResource : WFAccessResource

+ (BOOL)isSystemResource;

- (id)icon;
- (unsigned long long)status;
- (id)name;
- (void)makeAvailableWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)protectedResourceDescription;

@end
