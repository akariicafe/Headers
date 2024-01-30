@class NSMutableArray, CPZone;

@interface CPSpacerFinder : NSObject <CPDisposable> {
    CPZone *contentZone;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } zoneBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } textBounds;
    struct { unsigned int allocatedSize; unsigned int size; unsigned int count; struct *stats; struct **ordered; } spacerSequence;
    NSMutableArray *spacers;
    unsigned int segmentationCount;
    struct { id x0; unsigned int x1; struct *x2; } *segmentations;
    struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; struct { double x0; double x1; } x14; struct { double x0; double x1; } x15; struct { double x0; double x1; } x16; struct { double x0; double x1; } x17; double x18; double x19; BOOL x20; BOOL x21; BOOL x22; } *qualityEntries;
}

- (void)finalize;
- (void)dispose;
- (void)dealloc;
- (id)spacers;
- (void)assessQuality;
- (void)determineValidity;
- (void)findSpacers;
- (id)initWithContentZone:(id)a0;
- (void)initializeJunctions;
- (void)initializeSegmentations;
- (void)splitTextLines;

@end
