@interface VCPFaceDetectionRange : NSObject

@property struct { long long value; int timescale; unsigned int flags; long long epoch; } start;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } last;
@property unsigned long long flags;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property unsigned long long position;
@property unsigned long long faceID;

@end
