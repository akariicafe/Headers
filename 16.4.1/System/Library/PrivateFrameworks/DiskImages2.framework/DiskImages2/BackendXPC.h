@class NSUUID;

@interface BackendXPC : NSObject <NSSecureCoding, NSCoding> {
    struct unique_ptr<crypto::header, std::default_delete<crypto::header>> { struct __compressed_pair<crypto::header *, std::default_delete<crypto::header>> { struct header *__value_; } __ptr_; } _cryptoHeader;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct shared_ptr<Backend> { struct Backend *__ptr_; struct __shared_weak_count *__cntrl_; } backend;
@property (readonly, copy, nonatomic) NSUUID *instanceID;
@property (readonly, nonatomic) void *cryptoHeader;

+ (id)newFileBackendWithURL:(id)a0 fileOpenFlags:(int)a1 error:(id *)a2;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isUnlocked;
- (int)lock;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (struct shared_ptr<Backend> { struct Backend *x0; struct __shared_weak_count *x1; })getCryptoHeaderBackend;
- (id)newUnlockedBackendXPCWithPassphrase:(const char *)a0 isNewImage:(BOOL)a1 error:(id *)a2;
- (id)newWithCryptoFormat:(const void *)a0;
- (void)replaceWithBackendXPC:(id)a0;
- (BOOL)tryCreatingCryptoHeader;

@end
