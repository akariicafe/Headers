@class NSArray, CHStrokeGroupingResult, CHStrokeClassificationResult, NSMutableArray;
@protocol CHStrokeProvider;

@interface CHTextLineStraightener : NSObject {
    struct vector<CoreHandwriting::BoundingBox, std::allocator<CoreHandwriting::BoundingBox>> { struct BoundingBox *__begin_; struct BoundingBox *__end_; struct __compressed_pair<CoreHandwriting::BoundingBox *, std::allocator<CoreHandwriting::BoundingBox>> { struct BoundingBox *__value_; } __end_cap_; } _originalBoundingBoxes;
    struct vector<CoreHandwriting::BoundingBox, std::allocator<CoreHandwriting::BoundingBox>> { struct BoundingBox *__begin_; struct BoundingBox *__end_; struct __compressed_pair<CoreHandwriting::BoundingBox *, std::allocator<CoreHandwriting::BoundingBox>> { struct BoundingBox *__value_; } __end_cap_; } _transformedBoundingBoxes;
}

@property (retain) NSArray *contextStrokes;
@property (retain) NSArray *contextResults;
@property (retain) id<CHStrokeProvider> strokeProvider;
@property (retain) CHStrokeGroupingResult *strokeGroupingResult;
@property (retain) CHStrokeClassificationResult *strokeClassificationResult;
@property (retain) NSMutableArray *correctionAngles;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)numCharacters;
- (id)createTelemetryDictionary:(double)a0 nonTextRatio:(double)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })fontTransferForDrawing:(id)a0 transcription:(id)a1 shouldCancel:(id /* block */)a2;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })fontTransferTransformForLineAtIndex:(long long)a0 progress:(id)a1 shouldCancel:(id /* block */)a2;
- (void)handleRemainingStrokes:(id)a0 contextStrokeGroups:(id)a1 transformations:(void *)a2 groupBounds:(id)a3;
- (id)initWithContextStrokes:(id)a0 contextResults:(id)a1 strokeGroupingResult:(id)a2 strokeClassificationResult:(id)a3 strokeProvider:(id)a4;
- (id)majorityScriptId;
- (id)meanRotationCorrectionAngle;
- (struct CHTextLineStraighteningResult { id x0; id x1; id x2; })straightenWithProgress:(id)a0 shouldCancel:(id /* block */)a1;
- (id /* block */)textStrokePointTransformationFromAffineTransformation:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

@end
