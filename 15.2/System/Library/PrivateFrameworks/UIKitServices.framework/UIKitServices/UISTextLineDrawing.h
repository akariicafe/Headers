@class NSString;

@interface UISTextLineDrawing : NSObject <UISDrawing> {
    struct __CTLine { } *_line;
    struct CGSize { double width; double height; } _size;
    struct CGVector { double dx; double dy; } _offset;
    double _baseline;
}

@property (readonly, nonatomic) BOOL hasLineBreak;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } drawingSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)drawInContext:(struct CGContext { } *)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithString:(struct __CFString { } *)a0 attributes:(struct __CFDictionary { } *)a1 scale:(double)a2;
- (id)initWithAttributedString:(struct __CFAttributedString { } *)a0 scale:(double)a1;
- (id)initWithNonretainedLine:(struct __CTLine { } *)a0 lineBreakMode:(unsigned char)a1 textAlignment:(unsigned char)a2 width:(double)a3 scale:(double)a4;
- (id)initWithString:(struct __CFString { } *)a0 attributes:(struct __CFDictionary { } *)a1 lineBreakMode:(unsigned char)a2 textAlignment:(unsigned char)a3 width:(double)a4 scale:(double)a5;
- (id)initWithAttributedString:(struct __CFAttributedString { } *)a0 lineBreakMode:(unsigned char)a1 textAlignment:(unsigned char)a2 width:(double)a3 scale:(double)a4;
- (id)initWithString:(struct __CFString { } *)a0 attributes:(struct __CFDictionary { } *)a1 width:(double)a2 truncationType:(unsigned int)a3 scale:(double)a4;
- (id)initWithAttributedString:(struct __CFAttributedString { } *)a0 width:(double)a1 truncationType:(unsigned int)a2 scale:(double)a3;

@end
