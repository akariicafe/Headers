@interface NSAssertionHandler : NSObject

@property (class, readonly) NSAssertionHandler *currentHandler;

- (void)handleFailureInFunction:(id)a0 file:(id)a1 lineNumber:(long long)a2 description:(id)a3;
- (void)handleFailureInMethod:(SEL)a0 object:(id)a1 file:(id)a2 lineNumber:(long long)a3 description:(id)a4;

@end
