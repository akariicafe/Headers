@class NSArray, VKQuad;

@interface VKCaptureTextDetectionResult : NSObject

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _imageBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingBox;
@property (readonly, nonatomic) VKQuad *boundingQuad;
@property (readonly, nonatomic) NSArray *lineQuads;
@property (readonly, nonatomic) NSArray *blockQuads;
@property (readonly, nonatomic) NSArray *normalizedLineQuads;
@property (readonly, nonatomic) double baselineAngle;

- (void).cxx_destruct;
- (id)boundingPathWithPadding:(double)a0 cornerRadius:(double)a1;
- (id)groupedPath;
- (id)groupedPathForLinesWithPadding:(double)a0 cornerRadius:(double)a1;
- (id)initWithBlock:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithBlocks:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;

@end
