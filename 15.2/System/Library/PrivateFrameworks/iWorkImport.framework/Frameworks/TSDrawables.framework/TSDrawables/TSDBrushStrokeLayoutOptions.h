@class NSArray;

@interface TSDBrushStrokeLayoutOptions : NSObject

@property (copy, nonatomic) NSArray *patternOffsetsBySubpath;
@property (copy, nonatomic) NSArray *transparencyLayersBySubpath;
@property (nonatomic) double strokeEnd;

- (void).cxx_destruct;
- (id)init;

@end
