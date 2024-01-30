@class CPCharSequence;

@interface CPZoneMaker : NSObject {
    CPCharSequence *charactersOnPage;
}

- (void)dealloc;
- (void)makeZonesIn:(id)a0;
- (unsigned int)categorizeGraphicsIn:(id)a0;
- (void)mergeQualifyingRectanglesIn:(id)a0;
- (void)makeZonesWithBoundaryIn:(id)a0;
- (void)cutHorizontalBorders:(id)a0 whereObscuredByShape:(id)a1;
- (void)cutVerticalBorders:(id)a0 whereObscuredByShape:(id)a1;
- (void)addZonesWithBoundaryIn:(id)a0 withBorder:(id)a1;
- (id)newZoneForStraddlersFrom:(id)a0;
- (void)addObjectsToStraddler:(id)a0 from:(id)a1;
- (BOOL)overlap:(id)a0 with:(id)a1;

@end
