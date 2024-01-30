@class SHSignature, NSMutableDictionary;

@interface SHSignatureChunker : NSObject

@property (readonly, nonatomic) SHSignature *originalSignature;
@property (readonly, nonatomic) NSMutableDictionary *chunkPositionsInOriginalSignature;

- (void).cxx_destruct;
- (id)initWithSignature:(id)a0;
- (id)chunksWithMaximumDuration:(double)a0 andOverlapDuration:(double)a1;
- (BOOL)containsChunk:(id)a0;
- (id)cropSignatureData:(id)a0 atPosition:(double)a1 withLength:(double)a2 error:(id *)a3;
- (double)offsetInOriginalSignatureForChunk:(id)a0;
- (id)splitSignature:(id)a0 fromStartPosition:(double)a1 intoDurationsOfSize:(double)a2 overlapDuration:(double)a3;

@end
