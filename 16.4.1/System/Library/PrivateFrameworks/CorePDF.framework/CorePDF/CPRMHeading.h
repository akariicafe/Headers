@interface CPRMHeading : NSObject {
    struct CGPDFNode { } *_node;
    struct CGPDFPage { } *_page;
}

@property (readonly) struct CGPDFPage { } *page;
@property struct { long long location; long long length; } textRange;

- (struct CGPDFPage { } *)page;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)initWithNode:(struct CGPDFNode { } *)a0 onPage:(struct CGPDFPage { } *)a1;

@end
