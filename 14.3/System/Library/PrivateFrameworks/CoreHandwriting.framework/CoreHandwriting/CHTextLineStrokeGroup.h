@class NSArray;

@interface CHTextLineStrokeGroup : CHStrokeGroup {
    NSArray *_writingDirectionSortedSubstrokes;
    struct CGVector { double dx; double dy; } _averageWritingOrientation;
    struct CGVector { double dx; double dy; } _averageStrokeDeviation;
    struct vector<CGVector, std::__1::allocator<CGVector> > { struct CGVector *__begin_; struct CGVector *__end_; struct __compressed_pair<CGVector *, std::__1::allocator<CGVector> > { struct CGVector *__value_; } __end_cap_; } _localStrokeWritingOrientations;
    long long _lastSubstrokeIndexBeforeMerge;
    NSArray *_coalescedLastSubstrokes;
}

@property (readonly, retain, nonatomic) NSArray *writingDirectionSortedStrokeIdentifiers;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)encodeWithCoder:(id)a0;
- (const struct CGPath { } *)newEstimatedBaselineForStrokesWithIdentifiers:(id)a0 estimatedDescenderLocations:(id)a1;
- (struct CGVector { double x0; double x1; })averageWritingOrientation;
- (id)initWithAncestorIdentifier:(long long)a0 strokeIdentifiers:(id)a1 firstStrokeIdentifier:(id)a2 lastStrokeIdentifier:(id)a3 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 strategyIdentifier:(id)a5 writingDirectionSortedSubstrokes:(id)a6 averageWritingOrientation:(struct CGVector { double x0; double x1; })a7 averageStrokeDeviation:(struct CGVector { double x0; double x1; })a8 writingDirectionSortedStrokeIdentifiers:(id)a9 localStrokeWritingOrientations:(const struct vector<CGVector, std::__1::allocator<CGVector> > { struct CGVector *x0; struct CGVector *x1; struct __compressed_pair<CGVector *, std::__1::allocator<CGVector> > { struct CGVector *x0; } x2; } *)a10 coalescedLastSubstrokes:(id)a11 groupingConfidence:(double)a12 firstStrokeOrigin:(struct CGPoint { double x0; double x1; })a13;
- (id)writingDirectionSortedSubstrokes;
- (struct CGPath { } *)newEstimatedBaselineForSubStrokes:(id)a0 estimatedDescenderLocations:(id)a1;
- (struct vector<CGVector, std::__1::allocator<CGVector> > { struct CGVector *x0; struct CGVector *x1; struct __compressed_pair<CGVector *, std::__1::allocator<CGVector> > { struct CGVector *x0; } x2; } *)localStrokeWritingOrientations;
- (id)initWithUniqueIdentifier:(long long)a0 ancestorIdentifier:(long long)a1 strokeIdentifiers:(id)a2 firstStrokeIdentifier:(id)a3 lastStrokeIdentifier:(id)a4 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 strategyIdentifier:(id)a6 writingDirectionSortedSubstrokes:(id)a7 averageWritingOrientation:(struct CGVector { double x0; double x1; })a8 averageStrokeDeviation:(struct CGVector { double x0; double x1; })a9 writingDirectionSortedStrokeIdentifiers:(id)a10 localStrokeWritingOrientations:(const struct vector<CGVector, std::__1::allocator<CGVector> > { struct CGVector *x0; struct CGVector *x1; struct __compressed_pair<CGVector *, std::__1::allocator<CGVector> > { struct CGVector *x0; } x2; } *)a11 coalescedLastSubstrokes:(id)a12 groupingConfidence:(double)a13 firstStrokeOrigin:(struct CGPoint { double x0; double x1; })a14;
- (id)initWithStrokeIdentifiers:(id)a0 firstStrokeIdentifier:(id)a1 lastStrokeIdentifier:(id)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 strategyIdentifier:(id)a4 writingDirectionSortedSubstrokes:(id)a5 averageWritingOrientation:(struct CGVector { double x0; double x1; })a6 averageStrokeDeviation:(struct CGVector { double x0; double x1; })a7 writingDirectionSortedStrokeIdentifiers:(id)a8 localStrokeWritingOrientations:(const struct vector<CGVector, std::__1::allocator<CGVector> > { struct CGVector *x0; struct CGVector *x1; struct __compressed_pair<CGVector *, std::__1::allocator<CGVector> > { struct CGVector *x0; } x2; } *)a9 coalescedLastSubstrokes:(id)a10 groupingConfidence:(double)a11 firstStrokeOrigin:(struct CGPoint { double x0; double x1; })a12;
- (id)groupByAddingStrokeIdentifiers:(id)a0 removingStrokeIdentifiers:(id)a1 firstStrokeIdentifier:(id)a2 lastStrokeIdentifier:(id)a3 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 writingDirectionSortedSubstrokes:(id)a5 averageWritingOrientation:(struct CGVector { double x0; double x1; })a6 averageStrokeDeviation:(struct CGVector { double x0; double x1; })a7 writingDirectionSortedStrokeIdentifiers:(id)a8 localStrokeWritingOrientations:(const struct vector<CGVector, std::__1::allocator<CGVector> > { struct CGVector *x0; struct CGVector *x1; struct __compressed_pair<CGVector *, std::__1::allocator<CGVector> > { struct CGVector *x0; } x2; } *)a9 coalescedLastSubstrokes:(id)a10 groupingConfidence:(double)a11 lastSubstrokeIndexBeforeMerge:(long long)a12 firstStrokeOrigin:(struct CGPoint { double x0; double x1; })a13;
- (struct CGVector { double x0; double x1; })localWritingOrientationAtStrokeIndex:(long long)a0;
- (struct CGVector { double x0; double x1; })averageStrokeDeviation;
- (long long)lastSubstrokeIndexBeforeMerge;
- (id)coalescedLastSubstrokes;

@end
