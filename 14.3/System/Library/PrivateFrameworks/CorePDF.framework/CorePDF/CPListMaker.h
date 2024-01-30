@class CPLayoutArea, NSArray, CPList;

@interface CPListMaker : NSObject <CPDisposable> {
    CPLayoutArea *area;
    NSArray *spacers;
    unsigned int textLineCount;
    id *textLines;
    CPList *list;
}

+ (void)makeListsInPage:(id)a0;
+ (void)makeListsInLayoutArea:(id)a0;
+ (void)makeListsInChunk:(id)a0;

- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (void)fetchTextLine:(id)a0;
- (void)makeListItemFrom:(struct CPListInfo { unsigned int x0; unsigned int x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct __CFString *x3; int x4; unsigned int x5; unsigned int x6; int x7; BOOL x8; BOOL x9; BOOL x10; void *x11; } *)a0 stopAt:(unsigned int)a1;
- (BOOL)makeListFrom:(struct CPListInfo { unsigned int x0; unsigned int x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct __CFString *x3; int x4; unsigned int x5; unsigned int x6; int x7; BOOL x8; BOOL x9; BOOL x10; void *x11; } *)a0;
- (void)fetchTextLinesInColumn:(id)a0;
- (void)makeListsInColumn:(id)a0;
- (id)initWithLayoutArea:(id)a0;
- (void)makeLists;

@end
