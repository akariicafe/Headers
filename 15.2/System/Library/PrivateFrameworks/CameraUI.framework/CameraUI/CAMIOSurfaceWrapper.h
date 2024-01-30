@interface CAMIOSurfaceWrapper : NSObject

@property (readonly, nonatomic) void *surface;

- (id)initWithIOSurface:(void *)a0;
- (void)dealloc;

@end
