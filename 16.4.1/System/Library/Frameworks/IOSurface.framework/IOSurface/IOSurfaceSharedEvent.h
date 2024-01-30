@interface IOSurfaceSharedEvent : NSObject <NSSecureCoding> {
    const unsigned long long *_signaledValue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long signaledValue;
@property (readonly) unsigned int eventPort;
@property (readonly) unsigned long long globalTraceObjectID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)init;
- (id)initWithMachPort:(unsigned int)a0;
- (void)notifyListener:(id)a0 atValue:(unsigned long long)a1 block:(id /* block */)a2;
- (BOOL)waitUntilSignaledValue:(unsigned long long)a0 timeoutMS:(unsigned long long)a1;

@end
