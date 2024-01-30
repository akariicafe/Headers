@class NSDictionary, NSXPCInterface, NSXPCConnection;

@interface _NSXPCDistantObject : NSObject <NSXPCProxyCreating, NSSecureCoding> {
    NSXPCInterface *_remoteInterface;
    id /* block */ _errorBlock;
    unsigned long long _proxyNumber;
    unsigned long long _generationCount;
    unsigned long long _flags;
    double _timeout;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain) NSXPCConnection *_connection;
@property (copy) NSDictionary *_userInfo;

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)remoteObjectProxyWithTimeout:(double)a0 errorHandler:(id /* block */)a1;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (id)remoteObjectProxyWithUserInfo:(id)a0 errorHandler:(id /* block */)a1;
- (id)_initWithConnection:(id)a0 exportedObject:(id)a1 interface:(id)a2;
- (id)_unboostingRemoteObjectProxy;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)_initWithConnection:(id)a0 proxyNumber:(unsigned long long)a1 generationCount:(unsigned long long)a2 interface:(id)a3 options:(unsigned long long)a4 error:(id /* block */)a5;
- (id)remoteObjectProxy;
- (void)forwardInvocation:(id)a0;
- (void)_forwardStackInvocation:(id)a0;

@end
