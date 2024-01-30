@class NSData, NSString, NSObject;
@protocol OS_xpc_object;

@interface PKImageSetXPCContainer : NSObject <NSSecureCoding, PKInvalidatable> {
    BOOL _invalidated;
    unsigned long long _length;
    BOOL _isShmem;
    unsigned long long _offset;
    NSObject<OS_xpc_object> *_data;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *imageSetHash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)containedImageSet;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (id)initWithWithXPCObject:(id)a0 hash:(id)a1;
- (id)initWithWithXPCObject:(id)a0 length:(unsigned long long)a1 isSharedMemory:(BOOL)a2 offset:(unsigned long long)a3 hash:(id)a4;

@end
