@class NSMutableArray, CPPage;

@interface CPHitTest : NSObject {
    CPPage *page;
    NSMutableArray *objectsOnPage;
    float mapTemp;
}

- (id)page;
- (void)dealloc;
- (id)initWithPage:(id)a0;
- (id)column:(struct CGPoint { double x0; double x1; })a0;
- (unsigned int)columnsAt:(struct CGPoint { double x0; double x1; })a0;
- (long long)compareByReadingOrder:(struct CGPoint { double x0; double x1; })a0 to:(struct CGPoint { double x0; double x1; })a1;
- (id)findBestMatch:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)findClickableObjects:(BOOL)a0;
- (id)findObjectIn:(id)a0 at:(struct CGPoint { double x0; double x1; })a1 count:(int *)a2;
- (BOOL)hitTestGraphicObject:(id)a0 point:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)hitTestParagraph:(id)a0 point:(struct CGPoint { double x0; double x1; })a1;
- (id)layoutArea:(struct CGPoint { double x0; double x1; })a0;
- (id)objectAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)paragraph:(struct CGPoint { double x0; double x1; })a0;
- (id)paragraphNear:(struct CGPoint { double x0; double x1; })a0;
- (id)textLine:(struct CGPoint { double x0; double x1; })a0;

@end
