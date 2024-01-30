@class ICCache;

@interface ICThumbnailDataCache : NSObject

@property (retain, nonatomic) ICCache *imageCache;

- (void).cxx_destruct;
- (id)init;
- (void)setThumbnailData:(id)a0 forKey:(id)a1;
- (void)removeThumbnailDataForKey:(id)a0;
- (id)thumbnailDataForKey:(id)a0;
- (void)removeAllThumbnailData;

@end
