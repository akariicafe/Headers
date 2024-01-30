@class SXTextTangierContainerInfo, NSSet, SXTextTangierDocumentRoot, SXTextSource, TSDLayoutController, NSArray;

@interface SXTextLayouter : NSObject

@property (retain, nonatomic) SXTextTangierDocumentRoot *documentRoot;
@property (retain, nonatomic) SXTextSource *textSource;
@property (retain, nonatomic) NSSet *exclusionPaths;
@property (retain, nonatomic) TSDLayoutController *layoutController;
@property (retain, nonatomic) SXTextTangierContainerInfo *textInfo;
@property (readonly, nonatomic) NSArray *paragraphRanges;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (struct CGSize { double x0; double x1; })boundingSize;
- (id)textLayout;
- (id)wpLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })typographicBounds;
- (void)invalidate;
- (double)calculateHeightForWidth:(double)a0;
- (void)removeAllExclusionPaths;
- (void)addExclusionPath:(id)a0;
- (double)verticalLocationOfCharacterAtIndex:(unsigned long long)a0;
- (id)wpStorage;
- (id)initWithTextSource:(id)a0 andDocumentRoot:(id)a1;
- (void)createTextInfoIfNeeded;
- (void)assignExclusionPaths;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })validAnchorRangeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)exclusionPathIndexes;
- (double)baselineForLastLine;
- (id)firstColumn;

@end
