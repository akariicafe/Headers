@class NSString;

@interface DiskImageParamsRAM_XPC : DiskImageParamsRaw_XPC

@property (readonly, copy, nonatomic) NSString *ramSizeStr;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void)setBlockSize:(unsigned long long)a0;
- (struct unique_ptr<DiskImage, std::default_delete<DiskImage>> { struct __compressed_pair<DiskImage *, std::default_delete<DiskImage>> { struct DiskImage *x0; } x0; })createSinkDiskImage;

@end
