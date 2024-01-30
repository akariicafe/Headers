@interface IOSurfaceSharedEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long signaledValue;
@property (readonly) unsigned int eventPort;
@property (readonly) unsigned long long globalTraceObjectID;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithMachPort:(unsigned int)a0;
- (void)notifyListener:(id)a0 atValue:(unsigned long long)a1 block:(id /* block */)a2;
- (void)encodeWithCoder:(id)a0;

@end
