@class NSDictionary, NSString;

@interface PIAutoLoopAdjustmentController : PIAdjustmentController

@property (copy, nonatomic) NSDictionary *recipe;
@property (copy, nonatomic) NSString *flavor;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } stabilizedCropRect;

+ (id)flavorKey;
+ (id)recipeKey;

- (id)pasteKeysForMediaType:(long long)a0;

@end
