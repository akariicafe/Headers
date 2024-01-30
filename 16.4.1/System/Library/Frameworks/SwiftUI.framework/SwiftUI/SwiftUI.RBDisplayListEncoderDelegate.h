@interface SwiftUI.RBDisplayListEncoderDelegate : NSObject <RBEncoderDelegate> {
    void /* unknown type, empty encoding */ encoder;
}

- (id)encodedImageData:(struct { int x0; void *x1; })a0 error:(id *)a1;
- (id)encodedCGFontData:(struct CGFont { } *)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;

@end
