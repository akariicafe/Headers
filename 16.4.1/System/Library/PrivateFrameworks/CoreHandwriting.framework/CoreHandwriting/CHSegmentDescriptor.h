@class NSNumber, CHCutPoint;

@interface CHSegmentDescriptor : NSObject

@property (readonly, nonatomic) NSNumber *segmentID;
@property (readonly, nonatomic) CHCutPoint *startCutPoint;
@property (readonly, nonatomic) CHCutPoint *endCutPoint;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } segmentBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contextBounds;

+ (long long)indexForSegmentID:(id)a0 fromSegments:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingBoxFromSegmentID:(long long)a0 toSegmentID:(long long)a1 withSegments:(id)a2 withSourceDrawing:(id)a3;
+ (id)generateSegmentsFromDrawing:(id)a0;

- (void).cxx_destruct;
- (long long)strokeCount;
- (id)initWithSegmentID:(id)a0 startCutPoint:(id)a1 endCutPoint:(id)a2 referenceDrawing:(id)a3;
- (BOOL)isSinglePointSegment;
- (id)strokeIndexSet;

@end
