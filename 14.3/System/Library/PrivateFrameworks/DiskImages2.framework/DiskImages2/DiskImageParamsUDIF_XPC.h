@interface DiskImageParamsUDIF_XPC : DiskImageParamsXPC {
    struct unique_ptr<udif::header, std::__1::default_delete<udif::header> > { struct __compressed_pair<udif::header *, std::__1::default_delete<udif::header> > { struct header *__value_; } __ptr_; } _header;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)blockSize;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isWritableFormat;
- (id)initWithBackendXPC:(id)a0 header:(struct unique_ptr<udif::header, std::__1::default_delete<udif::header> > { struct __compressed_pair<udif::header *, std::__1::default_delete<udif::header> > { struct header *x0; } x0; })a1;
- (struct unique_ptr<DiskImage, std::__1::default_delete<DiskImage> > { struct __compressed_pair<DiskImage *, std::__1::default_delete<DiskImage> > { struct DiskImage *x0; } x0; })createDiskImage;
- (unsigned long long)numBlocks;

@end
