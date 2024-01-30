@class NSString, SKTexture, NSMutableArray;

@interface SKUniform : NSObject <NSCopying, NSSecureCoding> {
    long long _type;
    SKTexture *_textureValue;
    NSMutableArray *_targetShaders;
    union { float _floatValue; void /* unknown type, empty encoding */ _floatVector2Value; void /* unknown type, empty encoding */ _floatVector3Value; void /* unknown type, empty encoding */ _floatVector4Value; struct { void /* unknown type, empty encoding */ columns[2]; } _floatMatrix2Value; struct { void /* unknown type, empty encoding */ columns[3]; } _floatMatrix3Value; struct { void /* unknown type, empty encoding */ columns[4]; } _floatMatrix4Value; } _value;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long _seed;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long uniformType;
@property (retain, nonatomic) SKTexture *textureValue;
@property (nonatomic) float floatValue;
@property (nonatomic) void /* unknown type, empty encoding */ vectorFloat2Value;
@property (nonatomic) void /* unknown type, empty encoding */ vectorFloat3Value;
@property (nonatomic) void /* unknown type, empty encoding */ vectorFloat4Value;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[2]; } matrixFloat2x2Value;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[3]; } matrixFloat3x3Value;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } matrixFloat4x4Value;
@property union _GLKVector2 { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; float x2[2]; } floatVector2Value;
@property union _GLKVector3 { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; float x3[3]; } floatVector3Value;
@property union _GLKVector4 { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; struct { float x0; float x1; float x2; float x3; } x2; float x3[4]; } floatVector4Value;
@property union _GLKMatrix2 { struct { float x0; float x1; float x2; float x3; } x0; float x1[2][2]; float x2[4]; } floatMatrix2Value;
@property union _GLKMatrix3 { struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; } x0; float x1[9]; } floatMatrix3Value;
@property union _GLKMatrix4 { struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } x0; float x1[16]; } floatMatrix4Value;

+ (id)uniformWithName:(id)a0 matrixFloat3x3:(struct { void /* unknown type, empty encoding */ x0[3]; })a1;
+ (id)uniformWithName:(id)a0 matrixFloat2x2:(struct { void /* unknown type, empty encoding */ x0[2]; })a1;
+ (id)uniformWithName:(id)a0 matrixFloat4x4:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
+ (id)uniformWithName:(id)a0;
+ (id)uniformWithName:(id)a0 float:(float)a1;
+ (id)uniformWithName:(id)a0 floatMatrix2:(union _GLKMatrix2 { struct { float x0; float x1; float x2; float x3; } x0; float x1[2][2]; float x2[4]; })a1;
+ (id)uniformWithName:(id)a0 floatMatrix3:(union _GLKMatrix3 { struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; } x0; float x1[9]; })a1;
+ (id)uniformWithName:(id)a0 floatMatrix4:(union _GLKMatrix4 { struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } x0; float x1[16]; })a1;
+ (id)uniformWithName:(id)a0 floatVector2:(union _GLKVector2 { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; float x2[2]; })a1;
+ (id)uniformWithName:(id)a0 floatVector3:(union _GLKVector3 { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; float x3[3]; })a1;
+ (id)uniformWithName:(id)a0 floatVector4:(union _GLKVector4 { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; struct { float x0; float x1; float x2; float x3; } x2; float x3[4]; })a1;
+ (id)uniformWithName:(id)a0 texture:(id)a1;
+ (id)uniformWithName:(SEL)a0 vectorFloat2:(id)a1;
+ (id)uniformWithName:(SEL)a0 vectorFloat3:(id)a1;
+ (id)uniformWithName:(SEL)a0 vectorFloat4:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_addTargetShader:(id)a0;
- (void)_propagateChange;
- (void)_removeTargetShader:(id)a0;
- (id)initWithName:(id)a0 float:(float)a1;
- (id)initWithName:(id)a0 floatMatrix2:(union _GLKMatrix2 { struct { float x0; float x1; float x2; float x3; } x0; float x1[2][2]; float x2[4]; })a1;
- (id)initWithName:(id)a0 floatMatrix3:(union _GLKMatrix3 { struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; } x0; float x1[9]; })a1;
- (id)initWithName:(id)a0 floatMatrix4:(union _GLKMatrix4 { struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } x0; float x1[16]; })a1;
- (id)initWithName:(id)a0 floatVector2:(union _GLKVector2 { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; float x2[2]; })a1;
- (id)initWithName:(id)a0 floatVector3:(union _GLKVector3 { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; float x3[3]; })a1;
- (id)initWithName:(id)a0 floatVector4:(union _GLKVector4 { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; struct { float x0; float x1; float x2; float x3; } x2; float x3[4]; })a1;
- (id)initWithName:(id)a0 matrixFloat2x2:(struct { void /* unknown type, empty encoding */ x0[2]; })a1;
- (id)initWithName:(id)a0 matrixFloat3x3:(struct { void /* unknown type, empty encoding */ x0[3]; })a1;
- (id)initWithName:(id)a0 matrixFloat4x4:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (id)initWithName:(id)a0 texture:(id)a1;
- (id)initWithName:(SEL)a0 vectorFloat2:(id)a1;
- (id)initWithName:(SEL)a0 vectorFloat3:(id)a1;
- (id)initWithName:(SEL)a0 vectorFloat4:(id)a1;
- (BOOL)isEqualToUniform:(id)a0;

@end
