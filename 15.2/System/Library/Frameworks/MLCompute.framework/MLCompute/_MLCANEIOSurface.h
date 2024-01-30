@class NSDictionary, _ANEIOSurfaceObject;

@interface _MLCANEIOSurface : NSObject

@property (readonly, retain, nonatomic) _ANEIOSurfaceObject *ioSurfaceObject;
@property (readonly, retain, nonatomic) NSDictionary *liveIOStatus;

+ (void)initialize;
+ (id)objectWithDataLength:(unsigned long long)a0 liveIOStatus:(id)a1;

- (void).cxx_destruct;
- (id)initWithDataLength:(unsigned long long)a0 liveIOStatus:(id)a1;
- (id)aneIOSurfaceObjectWithDataLength:(unsigned long long)a0;
- (struct __IOSurface { } *)createIOSurface1x1WithLength:(unsigned long long)a0;

@end
