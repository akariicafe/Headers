@class __NSTextSelectionLineFragmentInfo;
@protocol NSTextSelectionDataSourcePrivate, NSTextSelectionDataSource;

@interface NSTextSelectionNavigation : NSObject {
    __NSTextSelectionLineFragmentInfo *_lineFragmentInfoCache[8];
    long long _multipleSelectionAnchor;
    BOOL _supportsLayoutOrientation;
    BOOL _supportsContainer;
}

@property (weak) id<NSTextSelectionDataSource> textSelectionDataSource;
@property (readonly, weak) id<NSTextSelectionDataSourcePrivate> textSelectionDataSourcePrivate;
@property BOOL allowsNonContiguousRanges;
@property BOOL rotatesCoordinateSystemForLayoutOrientation;

+ (void)initialize;
+ (void)_setupCharacterSets;
+ (id)_substringRangeForEnumerationType:(unsigned long long)a0 location:(id)a1 dataSource:(id)a2 string:(out id *)a3 enclosingRange:(out id *)a4;

- (long long)_horizontalDirectionForDirection:(long long)a0 location:(id)a1;
- (id)_logicalDestinationLocationForTextSelection:(id)a0 originLocation:(id)a1 direction:(long long)a2 destination:(long long)a3 extending:(BOOL)a4 confined:(BOOL)a5 affinity:(inout long long *)a6;
- (id)destinationForTextSelection:(id)a0 direction:(long long)a1 destination:(long long)a2 extending:(BOOL)a3;
- (id)resolvedInsertionLocationForTextSelection:(id)a0 writingDirection:(long long)a1;
- (double)_anchorPositionOffsetForLocation:(id)a0 textSelection:(id)a1 affinity:(long long)a2;
- (id)_adjustLocationForNearestCaretPosition:(id)a0 direction:(long long)a1;
- (id)_copyRangeForTextLineFragmentAtLocation:(id)a0 affinity:(long long)a1;
- (id)_copyRangeForTextLineFragmentAtLocation:(id)a0 affinity:(long long)a1 copyEnclosingRange:(out id *)a2;
- (id)destinationSelectionForTextSelection:(id)a0 direction:(long long)a1 destination:(long long)a2 extending:(BOOL)a3 confined:(BOOL)a4;
- (BOOL)_location:(id)a0 withAffinity:(long long)a1 isAtBoundaryOfDestination:(long long)a2 onSide:(long long)a3;
- (unsigned char)_bidiLevelAtLocation:(id)a0 affinity:(long long)a1;
- (id)textSelectionForSelectionGranularity:(long long)a0 enclosingPoint:(struct CGPoint { double x0; double x1; })a1 inContainerAtLocation:(id)a2;
- (id)_lineFragmentInfoForLocation:(id)a0 affinity:(long long)a1;
- (id)_findAnchorInfoForTextSelection:(id)a0 anchorPositionOffset:(inout double *)a1 anchorLocation:(out id *)a2;
- (id)textSelectionsInteractingAtPoint:(struct CGPoint { double x0; double x1; })a0 inContainerAtLocation:(id)a1 anchors:(id)a2 modifiers:(unsigned long long)a3 selecting:(BOOL)a4 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5;
- (id)_lineFragmentInfoForRange:(id)a0;
- (void)dealloc;
- (id)textSelectionForSelectionGranularity:(long long)a0 enclosingPoint:(struct CGPoint { double x0; double x1; })a1 inContainerAtLocation:(id)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)_lineFragmentInfoForPoint:(struct CGPoint { double x0; double x1; })a0 inContainerAtLocation:(id)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 layoutOrientation:(long long)a3 beforeLineFragment:(out BOOL *)a4 afterLineFragment:(out BOOL *)a5 lineFragmentRange:(out id *)a6;
- (id)deletionRangesForTextSelection:(id)a0 direction:(long long)a1 destination:(long long)a2 allowsDecomposition:(BOOL)a3;
- (id)_visualDestinationLocationForTextSelection:(id)a0 originLocation:(inout id *)a1 direction:(long long)a2 destination:(long long)a3 extending:(BOOL)a4 confined:(BOOL)a5 affinity:(inout long long *)a6 crossedLine:(out BOOL *)a7;
- (id)_rangeOfCombinedLineFragmentsInRanges:(id)a0;
- (id)textSelectionsInteractingAtPoint:(struct CGPoint { double x0; double x1; })a0 inContainerAtLocation:(id)a1 anchors:(id)a2 modifiers:(unsigned long long)a3 selecting:(BOOL)a4;
- (id)initWithDataSource:(id)a0;
- (double)_caretOffsetForTextLocation:(id)a0 affinity:(long long)a1;
- (id)_rangesWithDirectionalFormatAdjustmentsForRanges:(id)a0;
- (id)_rangesForSelectionStartingOffset:(double)a0 inLineFragmentInfo:(id)a1 endingOffset:(double)a2 inLineFragmentInfo:(id)a3 contiguous:(BOOL)a4;
- (id)textSelectionsForPoint:(struct CGPoint { double x0; double x1; })a0 inContainerAtLocation:(id)a1 anchors:(id)a2 modifiers:(unsigned long long)a3 selecting:(BOOL)a4;
- (long long)_logicalDirectionForDirection:(long long)a0 textSelection:(id)a1;
- (id)textSelectionForSelectionGranularity:(long long)a0 enclosingTextSelection:(id)a1;
- (BOOL)_usesVisualBidiSelection;
- (void).cxx_destruct;
- (id)destinationForTextSelection:(id)a0 direction:(long long)a1 destination:(long long)a2 extending:(BOOL)a3 confined:(BOOL)a4;
- (void)flushLayoutCache;

@end
