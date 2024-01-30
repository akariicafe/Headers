@interface CRKConcreteProcessPrimitives : NSObject <CRKProcessPrimitives>

- (BOOL)processExistsWithIdentifier:(int)a0;
- (id)subscribeToExitForProcessWithIdentifier:(int)a0 exitHandler:(id /* block */)a1;

@end
