@interface _ANEIOSurfaceObject : NSObject

@property (readonly, nonatomic) struct __IOSurface { } *ioSurface;

+ (id)new;
+ (id)objectWithIOSurface:(struct __IOSurface { } *)a0;
+ (struct __IOSurface { } *)createIOSurfaceWithWidth:(int)a0 pixel_size:(int)a1 height:(int)a2;
+ (struct __IOSurface { } *)createIOSurfaceWithWidth:(int)a0 pixel_size:(int)a1 height:(int)a2 bytesPerElement:(int)a3;

- (id)initWithIOSurface:(struct __IOSurface { } *)a0;
- (id)description;
- (id)init;
- (void)dealloc;

@end
