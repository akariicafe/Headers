@interface DiskImageParamsSparseBundle_XPC : DiskImageParamsXPC

+ (BOOL)supportsSecureCoding;

- (struct unique_ptr<DiskImage, std::default_delete<DiskImage>> { struct __compressed_pair<DiskImage *, std::default_delete<DiskImage>> { struct DiskImage *x0; } x0; })createSinkDiskImage;
- (BOOL)isSparseFormat;
- (BOOL)isWritableFormat;
- (unsigned long long)numBlocks;

@end
