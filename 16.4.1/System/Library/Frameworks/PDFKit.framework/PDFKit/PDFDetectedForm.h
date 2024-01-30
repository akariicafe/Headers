@interface PDFDetectedForm : NSObject {
    struct vector<PDFDetectedFormRow, std::allocator<PDFDetectedFormRow>> { struct PDFDetectedFormRow *__begin_; struct PDFDetectedFormRow *__end_; struct __compressed_pair<PDFDetectedFormRow *, std::allocator<PDFDetectedFormRow>> { struct PDFDetectedFormRow *__value_; } __end_cap_; } _rows;
    unsigned long long _fieldCount;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly) long long displayBox;

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)_classifyRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct vector<const CGDisplayListEntry *, std::allocator<const CGDisplayListEntry *>> { struct CGDisplayListEntry **x0; struct CGDisplayListEntry **x1; struct __compressed_pair<const CGDisplayListEntry **, std::allocator<const CGDisplayListEntry *>> { struct CGDisplayListEntry **x0; } x2; })_collectGlyphEntriesInDisplayList:(struct CGDisplayList { } *)a0 medianGlyphHeight:(double *)a1;
- (void)_insertFieldRect:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 ofKind:(long long)a1;
- (id)detectedFormFieldAtIndex:(unsigned long long)a0;
- (id)detectedFormFieldNearestPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithPage:(id)a0 displayBox:(long long)a1;

@end
