@interface ALAssetsFilter : NSObject

@property (retain, nonatomic) id internal;

+ (id)allAssets;
+ (id)allPhotos;
+ (id)allVideos;

- (int)_filter;
- (id)init;
- (void)dealloc;
- (void)_setFilter:(int)a0;

@end
