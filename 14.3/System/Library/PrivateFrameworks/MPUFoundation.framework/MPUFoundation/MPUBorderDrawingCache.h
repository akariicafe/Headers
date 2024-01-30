@class NSCache, MPUBorderView;

@interface MPUBorderDrawingCache : NSObject {
    MPUBorderView *_borderView;
    NSCache *_images;
}

@property (nonatomic) double displayScale;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_applicationDidReceiveMemoryWarning:(id)a0;
- (id)_borderView;
- (void)_invalidate;
- (id)imageForBorderConfiguration:(id)a0;

@end
