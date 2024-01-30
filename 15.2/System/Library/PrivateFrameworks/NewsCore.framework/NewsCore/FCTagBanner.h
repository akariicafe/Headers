@class FCAssetHandle;

@interface FCTagBanner : NSObject

@property (readonly, nonatomic) FCAssetHandle *assetHandle;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) struct FCEdgeInsets { double top; double left; double bottom; double right; } insets;

- (void).cxx_destruct;
- (id)initWithAssetHandle:(id)a0 size:(struct CGSize { double x0; double x1; })a1 insets:(struct FCEdgeInsets { double x0; double x1; double x2; double x3; })a2;

@end
