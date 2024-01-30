@class NSCache, MPUBorderView;

@interface MPUBorderDrawingCache : NSObject {
    MPUBorderView *_borderView;
    NSCache *_images;
}

@property (nonatomic) double displayScale;

- (void)_invalidate;
- (void).cxx_destruct;
- (void)_applicationDidReceiveMemoryWarning:(id)a0;
- (id)init;
- (void)dealloc;
- (id)_borderView;
- (id)imageForBorderConfiguration:(id)a0;

@end
