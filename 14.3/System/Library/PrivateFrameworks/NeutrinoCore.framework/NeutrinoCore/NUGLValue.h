@interface NUGLValue : NSObject {
    union { int intValue; float floatValue; struct { float x; float y; } vec2Value; struct { float x; float y; float z; float w; } vec4Value; struct { float a; float b; float _unused1; float c; float d; float _unused2; float tx; float ty; float _unused3; } mat3Value; struct { float m00; float m01; float m02; float m03; float m10; float m11; float m12; float m13; float m20; float m21; float m22; float m23; float m30; float m31; float m32; float m33; } mat4Value; } _value;
}

@property (readonly) unsigned int type;
@property (readonly) int intValue;
@property (readonly) float floatValue;
@property (readonly) struct { float x0; float x1; } vec2Value;
@property (readonly) struct { float x0; float x1; float x2; float x3; } vec4Value;
@property (readonly) struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; } mat3Value;
@property (readonly) struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } mat4Value;

+ (id)valueWithFloat:(float)a0;
+ (id)valueWithInt:(int)a0;
+ (id)valueWithVec2:(struct { float x0; float x1; })a0;
+ (id)valueWithVec4:(struct { float x0; float x1; float x2; float x3; })a0;
+ (id)valueWithMat3:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; })a0;
+ (id)valueWithMat4:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; })a0;

- (id)init;
- (id)description;
- (id)initWithBytes:(const void *)a0 type:(unsigned int)a1;

@end
