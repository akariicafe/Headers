@class NSNumber;

@interface _ANEIOSurfaceObject : NSObject

@property (readonly, nonatomic) struct __IOSurface { } *ioSurface;
@property (readonly, nonatomic) NSNumber *startOffset;

+ (id)new;
+ (id)objectWithIOSurface:(struct __IOSurface { } *)a0;
+ (struct __IOSurface { } *)createIOSurfaceWithWidth:(int)a0 pixel_size:(int)a1 height:(int)a2;
+ (struct __IOSurface { } *)createIOSurfaceWithWidth:(int)a0 pixel_size:(int)a1 height:(int)a2 bytesPerElement:(int)a3;
+ (id)objectWithIOSurface:(struct __IOSurface { } *)a0 startOffset:(id)a1;
+ (id)objectWithIOSurfaceNoRetain:(struct __IOSurface { } *)a0 startOffset:(id)a1;

- (void)dealloc;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIOSurface:(struct __IOSurface { } *)a0 startOffset:(id)a1 shouldRetain:(BOOL)a2;

@end
