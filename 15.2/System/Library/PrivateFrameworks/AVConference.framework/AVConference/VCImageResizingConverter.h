@interface VCImageResizingConverter : VCImageConverterBase {
    struct OpaqueVTPixelTransferSession { } *_transferSession;
}

- (void)dealloc;
- (id)initWithOutputWidth:(unsigned long long)a0 outputHeight:(unsigned long long)a1 formatType:(unsigned int)a2;

@end
