@class NSData;

@interface MFPMetafileImage : MFPImage {
    NSData *mMetafileData;
}

- (void).cxx_destruct;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 unit:(int)a2 effect:(id)a3;
- (id)initWithMetafileData:(id)a0;
- (id)phoneImage;

@end
