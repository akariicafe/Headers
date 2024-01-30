@interface NSSQLBlockRequestContext : NSSQLStoreRequestContext {
    id /* block */ _workBlock;
}

- (id)initWithBlock:(id /* block */)a0 context:(id)a1 sqlCore:(id)a2;
- (BOOL)executeRequestCore:(id *)a0;
- (BOOL)isWritingRequest;
- (void)dealloc;

@end
