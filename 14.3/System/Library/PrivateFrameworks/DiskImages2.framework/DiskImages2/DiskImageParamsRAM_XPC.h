@interface DiskImageParamsRAM_XPC : DiskImageParamsRaw_XPC

+ (BOOL)supportsSecureCoding;

- (id)initWithURL:(id)a0 error:(id *)a1;
- (void)setBlockSize:(unsigned long long)a0;
- (struct unique_ptr<DiskImage, std::__1::default_delete<DiskImage> > { struct __compressed_pair<DiskImage *, std::__1::default_delete<DiskImage> > { struct DiskImage *x0; } x0; })createDiskImage;

@end
