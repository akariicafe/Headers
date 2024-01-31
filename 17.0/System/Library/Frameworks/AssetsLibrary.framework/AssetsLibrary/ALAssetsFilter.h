@interface ALAssetsFilter : NSObject

@property (retain, nonatomic) id internal;

+ (id)allAssets;
+ (id)allPhotos;
+ (id)allVideos;

- (id)init;
- (void)dealloc;
- (int)_filter;
- (void)_setFilter:(int)a0;

@end
