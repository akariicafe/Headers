@class NSUUID;

@interface BackendXPC : NSObject <NSSecureCoding, NSCoding> {
    struct unique_ptr<crypto::header, std::__1::default_delete<crypto::header> > { struct __compressed_pair<crypto::header *, std::__1::default_delete<crypto::header> > { struct header *__value_; } __ptr_; } _cryptoHeader;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct shared_ptr<Backend> { struct Backend *__ptr_; struct __shared_weak_count *__cntrl_; } backend;
@property (readonly, nonatomic) NSUUID *instanceID;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithBackend:(struct shared_ptr<Backend> { struct Backend *x0; struct __shared_weak_count *x1; })a0;
- (id).cxx_construct;
- (void)encodeWithCoder:(id)a0;
- (struct unique_ptr<crypto::header, std::__1::default_delete<crypto::header> > { struct __compressed_pair<crypto::header *, std::__1::default_delete<crypto::header> > { struct header *x0; } x0; } *)getCryptoHeader;
- (BOOL)checkIfEncryptedWithErrno:(int *)a0;

@end
