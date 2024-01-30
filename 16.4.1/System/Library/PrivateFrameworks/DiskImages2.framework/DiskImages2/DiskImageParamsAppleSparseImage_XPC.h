@interface DiskImageParamsAppleSparseImage_XPC : DiskImageParamsXPC {
    struct unique_ptr<di_shadow::header, std::default_delete<di_shadow::header>> { struct __compressed_pair<di_shadow::header *, std::default_delete<di_shadow::header>> { struct header *__value_; } __ptr_; } _header;
}

+ (BOOL)supportsSecureCoding;

- (id)instanceID;
- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (struct unique_ptr<DiskImage, std::default_delete<DiskImage>> { struct __compressed_pair<DiskImage *, std::default_delete<DiskImage>> { struct DiskImage *x0; } x0; })createSinkDiskImage;
- (id)initWithBackendXPC:(id)a0 header:(struct unique_ptr<di_shadow::header, std::default_delete<di_shadow::header>> { struct __compressed_pair<di_shadow::header *, std::default_delete<di_shadow::header>> { struct header *x0; } x0; })a1;
- (BOOL)isSparseFormat;
- (BOOL)isWritableFormat;
- (unsigned long long)numBlocks;
- (int)setSizeWithDiskImage:(const void *)a0 newSize:(unsigned long long)a1;

@end
