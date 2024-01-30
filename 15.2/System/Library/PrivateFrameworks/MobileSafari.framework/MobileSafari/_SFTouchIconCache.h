@interface _SFTouchIconCache : WBSTouchIconCache

+ (id)_monogramConfiguration;
+ (id)defaultBackgroundColor;
+ (id)_generateDefaultFavoritesIcon;

- (BOOL)canHandleRequest:(id)a0;
- (id)_operationWithRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
