@interface CRTextSequenceRecognizerTopKModelEspresso : CRTextSequenceRecognizerModelEspresso

- (id)outputNames;
- (id)outputFromOutputBuffers:(struct vector<espresso_buffer_t, std::allocator<espresso_buffer_t>> { struct *x0; struct *x1; struct __compressed_pair<espresso_buffer_t *, std::allocator<espresso_buffer_t>> { struct *x0; } x2; })a0 featureInfo:(id)a1;

@end
