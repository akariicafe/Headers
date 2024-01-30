@class VNFaceObservation;

@interface VCPFace : NSObject

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property BOOL leftEyeClosed;
@property BOOL rightEyeClosed;
@property BOOL smile;
@property long long yaw;
@property int trackID;
@property float confidence;
@property float faceQuality;
@property (retain) VNFaceObservation *observation;

- (id)init;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })faceBounds:(unsigned long long)a0 height:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })faceBoundsWithTransform:(unsigned long long)a0 height:(unsigned long long)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (unsigned long long)flagsForOrientation:(BOOL)a0 width:(unsigned long long)a1 height:(unsigned long long)a2;

@end
