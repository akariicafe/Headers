@class NSDictionary, _ANEIOSurfaceObject;

@interface _MLCANEIOSurfaceObject : NSObject

@property (readonly, retain, nonatomic) _ANEIOSurfaceObject *ioSurfaceObject;
@property (readonly, retain, nonatomic) NSDictionary *liveIOStatus;

+ (id)objectWithANEIOSurfaceObject:(id)a0 liveIOStatus:(id)a1;
+ (struct __IOSurface { } *)createIOSurface1x1WithLength:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)initWithIOSurface:(id)a0 liveIOStatus:(id)a1;

@end
