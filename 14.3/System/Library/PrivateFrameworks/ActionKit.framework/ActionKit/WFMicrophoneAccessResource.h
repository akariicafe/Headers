@interface WFMicrophoneAccessResource : WFAccessResource

+ (BOOL)isSystemResource;

- (id)icon;
- (id)name;
- (unsigned long long)globalLevelStatus;
- (id)protectedResourceDescription;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;

@end
