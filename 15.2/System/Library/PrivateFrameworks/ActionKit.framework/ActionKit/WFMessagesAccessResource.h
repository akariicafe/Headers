@interface WFMessagesAccessResource : WFAccessResource

+ (BOOL)isSystemResource;

- (unsigned long long)status;
- (id)associatedAppIdentifier;

@end
