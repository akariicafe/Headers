@interface CRJSContext : JSContext

+ (id)sharedContext;

- (void)evaluateScript:(id)a0 completionHandler:(id /* block */)a1;
- (void)_createCard:(id)a0 completionHandler:(id /* block */)a1;
- (id)_cardWithTitle:(id)a0 cardSections:(id)a1 interaction:(id)a2 error:(id *)a3;
- (id)initWithVirtualMachine:(id)a0;

@end
