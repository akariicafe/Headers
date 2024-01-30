@interface DiskImageParamsRaw_XPC : DiskImageParamsXPC

+ (BOOL)supportsSecureCoding;

- (BOOL)isWritableFormat;
- (unsigned long long)numBlocks;
- (struct unique_ptr<DiskImage, std::default_delete<DiskImage>> { struct __compressed_pair<DiskImage *, std::default_delete<DiskImage>> { struct DiskImage *x0; } x0; })createSinkDiskImage;

@end
