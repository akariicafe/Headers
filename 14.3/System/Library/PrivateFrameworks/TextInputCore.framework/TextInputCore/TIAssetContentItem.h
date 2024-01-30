@class TIAsset, TIAssetAttributes, NSURL;

@interface TIAssetContentItem : NSObject

@property (readonly, nonatomic) TIAsset *asset;
@property (readonly, nonatomic) TIAssetAttributes *attributes;
@property (readonly, nonatomic) NSURL *url;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithAsset:(id)a0 attributes:(id)a1 url:(id)a2;

@end
