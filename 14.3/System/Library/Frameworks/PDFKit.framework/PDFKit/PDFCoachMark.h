@class PDFPageLayerEffect, NSDate;

@interface PDFCoachMark : NSObject {
    NSDate *creationTime;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
    PDFPageLayerEffect *layerEffect;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)playEffect:(id)a0;
- (double)effectTimeLeft;

@end
