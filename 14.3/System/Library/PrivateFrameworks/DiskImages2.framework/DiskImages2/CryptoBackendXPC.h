@class BackendXPC;

@interface CryptoBackendXPC : BackendXPC

@property (retain, nonatomic) BackendXPC *baseBackendXPC;
@property (nonatomic) struct shared_ptr<crypto::format> { struct format *__ptr_; struct __shared_weak_count *__cntrl_; } cryptoFormat;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)encodeWithCoder:(id)a0;
- (BOOL)checkIfEncryptedWithErrno:(int *)a0;
- (void)createBackendWithKeys:(struct keys { struct vector<std::byte, std::__1::allocator<std::byte> > { unsigned char *x0; unsigned char *x1; struct __compressed_pair<std::byte *, std::__1::allocator<std::byte> > { unsigned char *x0; } x2; } x0; struct vector<std::byte, std::__1::allocator<std::byte> > { unsigned char *x0; unsigned char *x1; struct __compressed_pair<std::byte *, std::__1::allocator<std::byte> > { unsigned char *x0; } x2; } x1; struct unique_ptr<crypto::format::header_v2, std::__1::default_delete<crypto::format::header_v2> > { struct __compressed_pair<crypto::format::header_v2 *, std::__1::default_delete<crypto::format::header_v2> > { struct header_v2 *x0; } x0; } x2; struct shared_ptr<Backend> { struct Backend *x0; struct __shared_weak_count *x1; } x3; } *)a0;
- (id)initWithKeys:(struct keys { struct vector<std::byte, std::__1::allocator<std::byte> > { unsigned char *x0; unsigned char *x1; struct __compressed_pair<std::byte *, std::__1::allocator<std::byte> > { unsigned char *x0; } x2; } x0; struct vector<std::byte, std::__1::allocator<std::byte> > { unsigned char *x0; unsigned char *x1; struct __compressed_pair<std::byte *, std::__1::allocator<std::byte> > { unsigned char *x0; } x2; } x1; struct unique_ptr<crypto::format::header_v2, std::__1::default_delete<crypto::format::header_v2> > { struct __compressed_pair<crypto::format::header_v2 *, std::__1::default_delete<crypto::format::header_v2> > { struct header_v2 *x0; } x0; } x2; struct shared_ptr<Backend> { struct Backend *x0; struct __shared_weak_count *x1; } x3; } *)a0 baseBackendXPC:(id)a1;

@end
