@interface ARCoachingTransformations : NSObject

+ (struct { void /* unknown type, empty encoding */ x0[4]; })translate:(SEL)a0;
+ (struct { void /* unknown type, empty encoding */ x0[4]; })scale:(SEL)a0;
+ (float)degreesToRadians:(float)a0;
+ (struct { })fromMatrix:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
+ (struct { void /* unknown type, empty encoding */ x0[4]; })lookAt:(id)a0 center:(SEL)a1 up:(void /* unknown type, empty encoding */)a2;
+ (struct { void /* unknown type, empty encoding */ x0[4]; })ortho2d:(float)a0 right:(float)a1 bottom:(float)a2 top:(float)a3 near:(float)a4 far:(float)a5;
+ (struct { void /* unknown type, empty encoding */ x0[4]; })perspective_fov:(float)a0 aspect:(float)a1 near:(float)a2 far:(float)a3;
+ (struct { void /* unknown type, empty encoding */ x0[4]; })rotate:(SEL)a0 axis:(float)a1;

@end
