@interface ALAssetsFilter : NSObject

@property (retain, nonatomic) id internal;

+ (id)allAssets;
+ (id)allPhotos;
+ (id)allVideos;

- (void)dealloc;
- (id)init;
- (int)_filter;
- (void)_setFilter:(int)a0;

@end
