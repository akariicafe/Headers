@interface ABPKResultRegistration : NSObject

@property (nonatomic) BOOL success;
@property (nonatomic) void *joints2d;
@property (nonatomic) void *joints3dWrtBody;
@property (nonatomic) void *joints3dWrtCamera;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } intrinsics;
@property (nonatomic) void /* unknown type, empty encoding */ distortion;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } cameraFromBodyPose;

@end
