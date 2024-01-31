@interface NSSQLBlockRequestContext : NSSQLStoreRequestContext {
    id /* block */ _workBlock;
}

- (void)dealloc;
- (id)initWithBlock:(id /* block */)a0 context:(id)a1 sqlCore:(id)a2;
- (BOOL)executeRequestCore:(id *)a0;
- (BOOL)isWritingRequest;

@end
