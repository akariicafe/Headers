@class CPCharSequence;

@interface CPZoneMaker : NSObject {
    CPCharSequence *charactersOnPage;
}

- (void)dealloc;
- (void)addObjectsToStraddler:(id)a0 from:(id)a1;
- (void)addZonesWithBoundaryIn:(id)a0 withBorder:(id)a1;
- (unsigned int)categorizeGraphicsIn:(id)a0;
- (void)cutHorizontalBorders:(id)a0 whereObscuredByShape:(id)a1;
- (void)cutVerticalBorders:(id)a0 whereObscuredByShape:(id)a1;
- (void)makeZonesIn:(id)a0;
- (void)makeZonesWithBoundaryIn:(id)a0;
- (void)mergeQualifyingRectanglesIn:(id)a0;
- (id)newZoneForStraddlersFrom:(id)a0;
- (BOOL)overlap:(id)a0 with:(id)a1;
- (void)splitByRotatation:(id)a0 inPage:(id)a1;

@end
