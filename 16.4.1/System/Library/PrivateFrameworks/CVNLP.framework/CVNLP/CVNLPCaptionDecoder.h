@interface CVNLPCaptionDecoder : CVNLPCaptionModelBase

- (void)_fill_blob_data:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; })a0 with:(float)a1;
- (id)computeCaptionForImageWithInputs:(id)a0 genderOption:(int)a1;

@end
