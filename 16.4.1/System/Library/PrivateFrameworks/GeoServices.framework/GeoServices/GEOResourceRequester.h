@protocol GEOResourceRequesterProxy;

@interface GEOResourceRequester : NSObject {
    id<GEOResourceRequesterProxy> _proxy;
}

@property (class, readonly, nonatomic) GEOResourceRequester *sharedRequester;

+ (void)setProxyClass:(Class)a0;

- (id)initWithProxy:(id)a0;
- (void)fetchResources:(id)a0 force:(BOOL)a1 manifestConfiguration:(id)a2 auditToken:(id)a3 queue:(id)a4 handler:(id /* block */)a5;
- (id)init;
- (void)fetchResources:(id)a0 force:(BOOL)a1 manifestConfiguration:(id)a2 auditToken:(id)a3 signpostID:(unsigned long long)a4 queue:(id)a5 handler:(id /* block */)a6;
- (void).cxx_destruct;

@end
