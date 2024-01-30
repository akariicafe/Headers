@class CPPage, NSMutableArray, CPZone;

@interface CPParagraphMaker : NSObject {
    NSMutableArray *avail;
    NSMutableArray *paragraphs;
    NSMutableArray *compoundedShapesOnPage;
    BOOL spacingSet;
    double currentSpacing;
    CPZone *parent;
    CPPage *page;
}

+ (BOOL)line:(id)a0 alignsWith:(id)a1;

- (void)dealloc;
- (id)paragraphs;
- (void)makeParagraphsIn:(id)a0;
- (BOOL)line:(id)a0 isDirectlyBelow:(id)a1;
- (BOOL)line:(id)a0 isBelow:(id)a1;
- (int)indexOfUniqueLineBelow:(id)a0 from:(int)a1;
- (int)linesThatOverlapLineAt:(int)a0 between:(double)a1 and:(double)a2 from:(int)a3;
- (BOOL)isGraphicBetween:(id)a0 and:(id)a1;
- (unsigned long long)alignmentOf:(id)a0 and:(id)a1;
- (BOOL)fitsBelow:(id)a0 alignment:(unsigned long long)a1 spacing:(double)a2 from:(int)a3;
- (BOOL)spacingOf:(id)a0 and:(id)a1 and:(id)a2 is:(double *)a3;
- (unsigned long long)alignmentOf:(id)a0 and:(id)a1 and:(id)a2;
- (BOOL)styleOf:(id)a0 differsFromStyleOf:(id)a1;
- (BOOL)firstWordOf:(id)a0 fits:(id)a1 indent:(double)a2;
- (BOOL)line:(id)a0 isAlignedWith:(id)a1;
- (int)paragraph:(id)a0 splits:(id)a1;
- (void)addCompoundedShapesOn:(id)a0 to:(id)a1;
- (id)newInitialParagraph;
- (void)addLinesTo:(id)a0;

@end
