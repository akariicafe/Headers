@interface ABPKCameraParams : NSObject

@property struct { void /* unknown type, empty encoding */ columns[3]; } intrinsics;
@property struct { void /* unknown type, empty encoding */ columns[4]; } extrinsics;
@property void /* unknown type, empty encoding */ distortion;
@property struct CGSize { double width; double height; } inputRes;
@property long long deviceType;
@property BOOL isImageRectified;
@property long long deviceOrientation;

- (id)initWithDictionary:(id)a0;
- (id)toDict;
- (id)initWithIntrinsics:(SEL)a0 andExtrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a1 andDistortion:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;
- (id)initWithIntrinsics:(SEL)a0 andExtrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a1 andDistortion:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 andInputResolution:(struct CGSize { double x0; double x1; })a3;

@end
