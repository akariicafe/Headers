@class NSXPCConnection;

@interface OSLogCurrentProcessEnumerator : OSLogEnumerator {
    NSXPCConnection *_connectionToService;
}

- (id)nextObject;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithOptions:(unsigned long long)a0 predicate:(id)a1 position:(id)a2;

@end
