@interface _UICollectionLayoutFramesQueryOffsets : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } frameOffset;
@property (nonatomic) long long indexOffset;
@property (nonatomic) long long supplementaryIndexOffset;

- (id)init;
- (id)initWithFrameOffset:(struct CGPoint { double x0; double x1; })a0 indexOffset:(long long)a1 supplementaryIndexOffset:(long long)a2;

@end
