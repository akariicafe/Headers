@class CHStrokeClassificationResult;
@protocol CHStrokeProvider;

@interface CHStrokeClassifier : NSObject

@property (readonly, retain, nonatomic) id<CHStrokeProvider> strokeProvider;
@property (readonly, retain, nonatomic) CHStrokeClassificationResult *strokeClassificationLastResult;
@property (readonly, nonatomic) BOOL textOnly;

+ (id)nonTextCandidateForStroke:(id)a0 withSubstrokes:(id)a1;
+ (double)containerSupportForPoints:(const struct vector<CGPoint, std::__1::allocator<CGPoint> > { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { struct CGPoint *x0; } x2; } *)a0 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (void)dealloc;
- (id)initWithStrokeProvider:(id)a0 strokeClassificationLastResult:(id)a1 textOnly:(BOOL)a2;
- (id)updatedStrokeClassificationResultByAddingStrokes:(id)a0 removingStrokeIdentifiers:(id)a1 clutterFilter:(id)a2 affectedClutterStrokeIDs:(id)a3 cancellationBlock:(id /* block */)a4;
- (id)refineStrokeClassificationResultUsingClassificationResult:(id)a0 strokeClassificationModel:(id)a1 sortedAddedStrokes:(id)a2 removedStrokeIdentifiers:(id)a3 cancellationBlock:(id /* block */)a4;
- (BOOL)changeableClassificationByRefinement:(long long)a0 stroke:(id)a1;
- (long long)_tileIndexForYPosition:(double)a0 tileHeight:(long long)a1;

@end
