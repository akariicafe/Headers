@interface WebScreenOrientationObserver : NSObject

@property (nonatomic) void *provider;

- (id)initWithProvider:(void *)a0;
- (void)dealloc;
- (void)_screenOrientationDidChange;

@end
