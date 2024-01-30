@class BackendXPC;

@interface DiskImageParamsXPC : NSObject <NSSecureCoding, NSCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) BackendXPC *backendXPC;
@property (readonly, nonatomic) BOOL isWritableFormat;
@property (readonly, nonatomic) unsigned long long numBlocks;
@property (nonatomic) unsigned long long blockSize;

+ (id)newWithUnlockedBackendXPC:(id)a0 error:(id *)a1;
+ (id)newWithURL:(id)a0 fileOpenMode:(unsigned short)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBackendXPC:(id)a0;
- (struct unique_ptr<DiskImage, std::__1::default_delete<DiskImage> > { struct __compressed_pair<DiskImage *, std::__1::default_delete<DiskImage> > { struct DiskImage *x0; } x0; })createDiskImage;

@end
