@class _TtC8CloudKit17AssetStreamHandle;

@interface CKMediaItemMaker : NSObject

@property (readonly, nonatomic) _TtC8CloudKit17AssetStreamHandle *assetStreamHandle;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)dataRepresentationWithError:(id *)a0;
- (void).cxx_destruct;
- (id)initWithAssetStreamHandle:(id)a0;
- (id)makeAVPlayerItemWithURL:(id)a0;
- (id)makeAVPlayerItemWithURL:(id)a0 options:(id)a1;

@end
