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

+ (id)_newFenceFromServer:(unsigned int)a0 isObservable:(BOOL)a1;
+ (id)newFenceFromServer:(unsigned int)a0;
+ (id)_newFenceWithPort:(unsigned int)a0 name:(unsigned long long)a1;
+ (id)handleFromXPCRepresentation:(id)a0;
+ (id)handleForPort:(unsigned int)a0 fenceId:(unsigned long long)a1;
+ (id)newFenceFromDefaultServer;
+ (id)newObservableFenceFromServer:(unsigned int)a0;

- (id)_initWithXPCRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned int)copyPort;
- (unsigned int)_copyUntrackedPort;
- (unsigned int)_copyPort;
- (void)_accessMachPort:(id /* block */)a0;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)invalidate;
- (id)_initWithPort:(unsigned int)a0 name:(unsigned long long)a1;
- (void)dealloc;
- (id)createXPCRepresentation;
- (unsigned long long)fenceId;
- (void)accessMachPort:(id /* block */)a0;
- (id).cxx_construct;

@end
