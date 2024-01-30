@class ICCache;

@interface ICThumbnailDataCache : NSObject

@property (retain, nonatomic) ICCache *imageCache;

- (id)init;
- (void).cxx_destruct;
- (void)setThumbnailData:(id)a0 forKey:(id)a1;
- (id)thumbnailDataForKey:(id)a0;
- (void)removeAllThumbnailData;
- (void)removeThumbnailDataForKey:(id)a0;

@end
