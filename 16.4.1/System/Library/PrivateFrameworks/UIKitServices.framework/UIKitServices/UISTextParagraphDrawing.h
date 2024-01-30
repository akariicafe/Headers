@class NSString;

@interface UISTextParagraphDrawing : NSObject <UISDrawing> {
    struct __CFAttributedString { } *_textString;
    struct __CTFrame { } *_frame;
    struct CGSize { double width; double height; } _frameSize;
    double _drawingHeight;
    double _scale;
}

@property (readonly, nonatomic) unsigned char lineCount;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } drawingSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } alignmentRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)drawInContext:(struct CGContext { } *)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithString:(id)a0 attributes:(struct __CFDictionary { } *)a1 size:(struct CGSize { double x0; double x1; })a2 numberOfLines:(unsigned char)a3 scale:(double)a4;

@end
