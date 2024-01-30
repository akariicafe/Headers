@interface TSUAssertionHandler : NSAssertionHandler

+ (id)currentHandler;
+ (id)performBlockIgnoringAssertions:(id /* block */)a0;
+ (void)installAsNSHandler;
+ (void)testCaseStarted:(id)a0;
+ (void)testCaseStopped:(id)a0;

- (void)handleFailureInFunction:(id)a0 file:(id)a1 lineNumber:(long long)a2 description:(id)a3;
- (void)handleFailureInMethod:(SEL)a0 object:(id)a1 file:(id)a2 lineNumber:(long long)a3 description:(id)a4;
- (void)handleFailureWithLocation:(id)a0 file:(id)a1 lineNumber:(long long)a2 description:(id)a3 arguments:(char *)a4;

@end
