@interface DTMemlimitAssertionFactory : NSObject

- (id /* block */)_removeMemoryLimitsForPid:(int)a0;
- (id /* block */)assertionForPid:(int)a0;

@end
