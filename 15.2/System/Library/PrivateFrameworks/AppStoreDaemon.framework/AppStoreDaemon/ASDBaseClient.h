@interface ASDBaseClient : NSObject

- (BOOL)_clientHasEntitlement:(id)a0;
- (void)_call:(id)a0 run:(id /* block */)a1 error:(id /* block */)a2;

@end
