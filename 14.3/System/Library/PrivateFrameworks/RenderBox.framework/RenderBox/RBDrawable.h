@class NSDictionary, RBDevice;
@protocol MTLTexture, RBDrawableDelegate;

@interface RBDrawable : NSObject <_RBDrawableDelegate, RBDrawableStatistics> {
    struct unique_ptr<RB::Drawable, std::__1::default_delete<RB::Drawable> > { struct __compressed_pair<RB::Drawable *, std::__1::default_delete<RB::Drawable> > { struct Drawable *__value_; } __ptr_; } _drawable;
    struct spin_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock; } _statistics_handler_lock;
    struct objc_ptr<void (^)(id<RBDrawableStatistics>)> { id /* block */ _p; } _statistics_handler;
}

@property (readonly, nonatomic) RBDevice *device;
@property (weak, nonatomic) id<RBDrawableDelegate> delegate;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double scale;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) int initialState;
@property (nonatomic) struct { float red; float green; float blue; float alpha; } clearColor;
@property (retain, nonatomic) id<MTLTexture> texture;
@property (readonly, nonatomic) double GPUDuration;
@property (readonly, copy, nonatomic) NSDictionary *statistics;
@property (copy, nonatomic) id /* block */ statisticsHandler;

- (void)finish;
- (void)dumpTexture:(id)a0 name:(id)a1;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_RBDrawableStatisticsDidChange;
- (void)resetStatistics:(unsigned long long)a0 alpha:(double)a1;
- (void)renderDisplayList:(id)a0 flags:(unsigned int)a1;

@end
