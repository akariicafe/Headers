@interface _ANEIOSurfaceObject : NSObject

@property (readonly, nonatomic) struct __IOSurface { } *ioSurface;

+ (id)objectWithIOSurface:(struct __IOSurface { } *)a0;
+ (id)new;
+ (struct __IOSurface { } *)createIOSurfaceWithWidth:(int)a0 pixel_size:(int)a1 height:(int)a2;

- (id)init;
- (void)dealloc;
- (id)initWithIOSurface:(struct __IOSurface { } *)a0;
- (id)description;

@end
