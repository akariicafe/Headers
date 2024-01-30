@interface IOSurfaceSharedEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long signaledValue;
@property (readonly) unsigned int eventPort;
@property (readonly) unsigned long long globalTraceObjectID;

- (id)initWithMachPort:(unsigned int)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)notifyListener:(id)a0 atValue:(unsigned long long)a1 block:(id /* block */)a2;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)waitUntilSignaledValue:(unsigned long long)a0 timeoutMS:(unsigned long long)a1;

@end
