@interface DiskImageParamsRaw_XPC : DiskImageParamsXPC

+ (BOOL)supportsSecureCoding;

- (BOOL)isWritableFormat;
- (struct unique_ptr<DiskImage, std::__1::default_delete<DiskImage> > { struct __compressed_pair<DiskImage *, std::__1::default_delete<DiskImage> > { struct DiskImage *x0; } x0; })createDiskImage;
- (unsigned long long)numBlocks;

@end
