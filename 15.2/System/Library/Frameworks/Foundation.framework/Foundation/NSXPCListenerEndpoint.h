@interface NSXPCListenerEndpoint : NSObject <NSSecureCoding> {
    void *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)_endpoint;
- (void)encodeWithCoder:(id)a0;
- (void)_setEndpoint:(id)a0;
- (id)_initWithConnection:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
