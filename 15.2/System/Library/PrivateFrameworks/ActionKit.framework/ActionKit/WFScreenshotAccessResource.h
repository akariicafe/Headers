@interface WFScreenshotAccessResource : WFAccessResource

+ (BOOL)isSystemResource;

- (unsigned long long)status;
- (id)icon;
- (id)name;

@end
