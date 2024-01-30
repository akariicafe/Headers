@interface NSXPCListenerEndpoint : NSObject <NSSecureCoding> {
    void *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)_endpoint;
- (id)_initWithConnection:(id)a0;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)_setEndpoint:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
