@interface SwiftUI.RBDisplayListEncoderDelegate : NSObject <RBEncoderDelegate> {
    void /* unknown type, empty encoding */ encoder;
}

- (void).cxx_destruct;
- (id)init;
- (id)encodedImageData:(struct { int x0; void *x1; })a0 error:(id *)a1;
- (id)encodedCGFontData:(struct CGFont { } *)a0 error:(id *)a1;

@end
