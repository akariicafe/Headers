@class RMAsset, NSError;

@interface RMResolvedAsset : NSObject

@property (readonly, nonatomic) RMAsset *asset;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 error:(id)a1;

@end
