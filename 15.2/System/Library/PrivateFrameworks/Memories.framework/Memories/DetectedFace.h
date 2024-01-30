@class NSNumber;

@interface DetectedFace : NSObject

@property (retain, nonatomic) NSNumber *size;
@property (nonatomic) struct CGPoint { double x; double y; } leftEye;
@property (nonatomic) struct CGPoint { double x; double y; } rightEye;
@property (nonatomic) struct CGPoint { double x; double y; } mouthCenter;
@property (nonatomic) struct CGPoint { double x; double y; } faceCenter;
@property (retain, nonatomic) NSNumber *confidence;
@property (nonatomic) int trackID;
@property (nonatomic) int frames;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } faceRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } approximateFaceRect;

- (id)description;
- (void).cxx_destruct;
- (id)initWithFaceSize:(id)a0 leftEye:(struct CGPoint { double x0; double x1; })a1 rightEye:(struct CGPoint { double x0; double x1; })a2 mouthCenter:(struct CGPoint { double x0; double x1; })a3 faceCenter:(struct CGPoint { double x0; double x1; })a4 confidence:(id)a5 trackID:(int)a6 frames:(int)a7;
- (id)initWithFaceFeature:(id)a0 withImageSize:(struct CGSize { double x0; double x1; })a1;

@end
