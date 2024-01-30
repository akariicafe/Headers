@class SXTextTangierContainerInfo, NSSet, SXTextTangierDocumentRoot, SXTextSource, TSDLayoutController, NSArray;

@interface SXTextLayouter : NSObject

@property (retain, nonatomic) SXTextTangierDocumentRoot *documentRoot;
@property (retain, nonatomic) SXTextSource *textSource;
@property (retain, nonatomic) NSSet *exclusionPaths;
@property (retain, nonatomic) TSDLayoutController *layoutController;
@property (retain, nonatomic) SXTextTangierContainerInfo *textInfo;
@property (readonly, nonatomic) NSArray *paragraphRanges;

- (id)init;
- (void)invalidate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })typographicBounds;
- (void).cxx_destruct;
- (void)reset;
- (struct CGSize { double x0; double x1; })boundingSize;
- (id)textLayout;
- (id)firstColumn;
- (double)calculateHeightForWidth:(double)a0;
- (void)addExclusionPath:(id)a0;
- (void)assignExclusionPaths;
- (double)baselineForLastLine;
- (void)createTextInfoIfNeeded;
- (id)exclusionPathIndexes;
- (id)initWithTextSource:(id)a0 andDocumentRoot:(id)a1;
- (void)removeAllExclusionPaths;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })validAnchorRangeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (double)verticalLocationOfCharacterAtIndex:(unsigned long long)a0;
- (id)wpLayout;
- (id)wpStorage;

@end
