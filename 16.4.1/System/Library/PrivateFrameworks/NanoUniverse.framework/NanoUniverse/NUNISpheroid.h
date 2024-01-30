@class NSString, NUNIScene;

@interface NUNISpheroid : NSObject <NUNIAnimatable, NUNIRotatable>

@property (readonly, weak, nonatomic) NUNIScene *scene;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NUNISpheroid *parent;
@property (nonatomic) float distance;
@property (nonatomic) float distanceScale;
@property (nonatomic) float angle;
@property (nonatomic) float rotation;
@property (nonatomic) float opacity;
@property (nonatomic) float cloudOpacity;
@property (nonatomic) void /* unknown type, empty encoding */ colorize;
@property (readonly, nonatomic) float blend;
@property (readonly, nonatomic) float radius;
@property (nonatomic) float radiusScale;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ position;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ light;
@property (readonly, nonatomic) unsigned long long programType;
@property (nonatomic) unsigned long long spriteType;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } homeCoordinate;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } centerCoordinate;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic, getter=isFacing) BOOL facing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)_updateCamera;
- (void)_updatePositionFromAngle;
- (void /* unknown type, empty encoding */)animatedFloatForKey:(unsigned long long)a0;
- (void)date:(id)a0 toCameraPosition:(void *)a1 toCameraTarget:(void *)a2;
- (void)date:(id)a0 toRotation:(float *)a1 toAngle:(float *)a2 toLight:(void *)a3 toDistance:(float *)a4 toRadius:(float *)a5;
- (id)initWithScene:(id)a0 parent:(id)a1 type:(unsigned long long)a2;
- (void)setAnimatedFloat:(SEL)a0 forKey:(unsigned long long)a1;
- (void)updateSunLocationForDate:(id)a0;

@end
