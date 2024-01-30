@class NSString, NSObject;
@protocol OS_xpc_object;

@interface PKFileDescriptorXPCContainer : NSObject <NSSecureCoding, PKInvalidatable> {
    BOOL _invalidated;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _writeLock;
    NSObject<OS_xpc_object> *_fd;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFileURL:(id)a0;
- (id)_init;
- (id)init;
- (id)initWithFileDescriptor:(int)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)_initWithXPCFileDescriptor:(id)a0;
- (void)accessFileDescriptorWithBlock:(id /* block */)a0;

@end
