@class NSMutableArray;

@interface CPRMList : NSObject

@property (readonly) NSMutableArray *listItems;
@property (readonly) struct CGPDFPage { } *page;

- (struct CGPDFPage { } *)page;
- (void)addItem:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;

@end
