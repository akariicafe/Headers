@class NSMutableArray, NSArray, NSNumber, CHCutPoint;

@interface CHSegmentDescriptor : NSObject {
    NSMutableArray *_relatedSegmentIDs;
}

@property (readonly, nonatomic) NSNumber *segmentID;
@property (readonly, nonatomic) CHCutPoint *startCutPoint;
@property (readonly, nonatomic) CHCutPoint *endCutPoint;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } segmentBounds;
@property (readonly, nonatomic) NSArray *relatedSegmentIDs;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contextBounds;
@property (nonatomic) double trailingSpaceRatio;
@property (nonatomic) double trailingSpaceProbability;
@property (nonatomic) double trailingCharBoundaryProbability;

+ (long long)indexForSegmentID:(id)a0 fromSegments:(id)a1;
+ (id)generateSegmentsFromDrawing:(id)a0 withSegmentationPoints:(id)a1 buildingContextBoundsWithRadius:(long long)a2 spaceProbabilities:(const void *)a3 charBoundaryProbabilities:(const void *)a4 extractDelayedStrokeIDs:(const void *)a5 extractedDelayedSegments:(id *)a6;
+ (id)generateSegmentsFromDrawing:(id)a0;
+ (id)resolvedCutPoint:(id)a0 withReferenceDrawing:(id)a1;
+ (void)computeRelatedSegments:(id)a0 withDelayedSegments:(id)a1;
+ (void)_computeLocalContextForSegments:(id)a0 withContextSizeRadius:(long long)a1;
+ (void)_resassignSpaceProbabilitiesFromDelayedSegments:(id)a0 toSegments:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingBoxFromSegmentID:(long long)a0 toSegmentID:(long long)a1 withSegments:(id)a2 withSourceDrawing:(id)a3;

- (long long)strokeCount;
- (void)dealloc;
- (id)strokeIndexSet;
- (BOOL)isSinglePointSegment;
- (id)initWithSegmentID:(id)a0 startCutPoint:(id)a1 endCutPoint:(id)a2 trailingSpaceProbability:(double)a3 trailingCharBoundaryProbability:(double)a4 referenceDrawing:(id)a5;
- (void)_addRelatedSegmentID:(id)a0;

@end
