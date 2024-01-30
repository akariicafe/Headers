@interface WFRemoteServerAccessResource : WFAccessResource

+ (BOOL)isSystemResource;

- (unsigned long long)status;
- (id)icon;
- (id)init;
- (id)name;

@end
