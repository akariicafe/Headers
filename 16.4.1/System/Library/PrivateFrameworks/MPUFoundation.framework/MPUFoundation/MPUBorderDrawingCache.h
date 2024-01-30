@class NSCache, MPUBorderView;

@interface MPUBorderDrawingCache : NSObject {
    MPUBorderView *_borderView;
    NSCache *_images;
}

@property (nonatomic) double displayScale;

- (void)_applicationDidReceiveMemoryWarning:(id)a0;
- (id)_borderView;
- (void)dealloc;
- (id)init;
- (void)_invalidate;
- (void).cxx_destruct;
- (id)imageForBorderConfiguration:(id)a0;

@end
