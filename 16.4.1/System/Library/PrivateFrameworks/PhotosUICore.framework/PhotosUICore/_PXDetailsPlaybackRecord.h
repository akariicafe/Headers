@protocol _PXDetailsAutoplayTile;

@interface _PXDetailsPlaybackRecord : PXGridInlinePlaybackRecord

@property (readonly, nonatomic) id<_PXDetailsAutoplayTile> geometryReference;
@property (nonatomic) struct PXTileIdentifier { unsigned long long length; unsigned long long index[10]; } tileIdentifier;

- (long long)desiredPlayState;
- (void)setDesiredPlayState:(long long)a0;

@end
