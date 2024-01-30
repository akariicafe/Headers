@interface APHUDLayer : CALayer {
    struct __CTFont { } *_Font;
    struct __CFDictionary { } *_TextAttributes;
    struct __CFArray { } *_Labels;
    struct __CFArray { } *_Values;
    struct __CFArray { } *_Colors;
}

- (void)setValue:(struct __CFString { } *)a0 atIndex:(int)a1;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)addLine:(struct __CFString { } *)a0 withColorIndex:(int)a1;
- (void)setValueAtIndex:(int)a0 format:(id)a1;
- (id)init;
- (void)dealloc;

@end
