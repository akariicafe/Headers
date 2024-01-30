@class PXFlexMusicAsset;

@interface _PXFlexMusicCueRequest : NSObject

@property (readonly, nonatomic) PXFlexMusicAsset *asset;
@property (readonly, copy, nonatomic) id /* block */ resultHandler;

- (id)initWithAsset:(id)a0 resultHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
