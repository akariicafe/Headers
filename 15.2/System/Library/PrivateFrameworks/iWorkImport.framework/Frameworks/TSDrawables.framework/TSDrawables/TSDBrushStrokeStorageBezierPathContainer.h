@class TSUBezierPath;

@interface TSDBrushStrokeStorageBezierPathContainer : NSObject

@property (readonly, nonatomic) TSUBezierPath *originalPath;
@property (readonly, nonatomic) TSUBezierPath *pathWithPossibleSmoothing;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithOriginalPath:(id)a0 pathWithPossibleSmoothing:(id)a1;

@end
