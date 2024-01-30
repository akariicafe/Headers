@class PVFace;

@interface PVFacePair : NSObject

@property (readonly, nonatomic) PVFace *face1;
@property (readonly, nonatomic) PVFace *face2;
@property (readonly, nonatomic) double score;

- (void).cxx_destruct;
- (id)initWithFace:(id)a0 andFace:(id)a1 andScore:(double)a2;

@end
