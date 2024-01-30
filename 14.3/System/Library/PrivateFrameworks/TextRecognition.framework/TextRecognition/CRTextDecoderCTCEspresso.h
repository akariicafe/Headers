@interface CRTextDecoderCTCEspresso : CRTextDecoderCTCV2

- (void)decodeOutput:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 error:(id *)a2;
- (id)_buildActivationMatrices:(id)a0;
- (void)_decodeFeaturesWithInfo:(id)a0 activations:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2 error:(id *)a3;
- (void)_create2DArraysFromInputArray:(id)a0 classSize:(unsigned long long *)a1 outputArrays:(struct vector<espresso_buffer_t, std::__1::allocator<espresso_buffer_t> > { struct *x0; struct *x1; struct __compressed_pair<espresso_buffer_t *, std::__1::allocator<espresso_buffer_t> > { struct *x0; } x2; } *)a2;

@end
