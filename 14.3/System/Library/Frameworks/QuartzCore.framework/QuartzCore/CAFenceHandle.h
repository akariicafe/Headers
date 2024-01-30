@interface CAFenceHandle : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _handle_name;
    unsigned long long _fence_name;
    unsigned int _port;
    struct Mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _m; } _invalidation_mutex;
    struct SpinLock { struct { int x; } _l; } _lock;
    BOOL _invalidated;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long _name;
@property (readonly, getter=isUsable) BOOL usable;
@property (readonly, getter=isInvalidated) BOOL invalidated;

+ (id)handleFromXPCRepresentation:(id)a0;
+ (id)newFenceFromDefaultServer;
+ (id)_newFenceFromServer:(unsigned int)a0 isObservable:(BOOL)a1;
+ (id)newObservableFenceFromServer:(unsigned int)a0;
+ (id)handleForPort:(unsigned int)a0 fenceId:(unsigned long long)a1;
+ (id)_newFenceWithPort:(unsigned int)a0 name:(unsigned long long)a1;
+ (id)newFenceFromServer:(unsigned int)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)accessMachPort:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithXPCRepresentation:(id)a0;
- (id)description;
- (unsigned int)copyPort;
- (unsigned int)_copyPort;
- (id).cxx_construct;
- (void)_accessMachPort:(id /* block */)a0;
- (unsigned long long)fenceId;
- (id)_initWithPort:(unsigned int)a0 name:(unsigned long long)a1;
- (unsigned int)_copyUntrackedPort;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;
- (id)createXPCRepresentation;

@end
