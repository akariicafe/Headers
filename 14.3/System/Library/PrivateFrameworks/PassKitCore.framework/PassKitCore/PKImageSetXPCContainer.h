@class NSData, NSObject;
@protocol OS_xpc_object;

@interface PKImageSetXPCContainer : NSObject <NSSecureCoding> {
    unsigned long long _length;
    BOOL _isShmem;
    unsigned long long _offset;
    NSObject<OS_xpc_object> *_data;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *imageSetHash;

- (void)purge;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)containedImageSet;
- (id)initWithWithXPCObject:(id)a0 hash:(id)a1;
- (id)initWithWithXPCObject:(id)a0 length:(unsigned long long)a1 isSharedMemory:(BOOL)a2 offset:(unsigned long long)a3 hash:(id)a4;
- (void)encodeWithCoder:(id)a0;

@end
