@class NSString;

@interface AXShotflowFaceDetection : NSObject {
    float _area;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } box;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } defaultBox;
@property (nonatomic) float confidence;
@property (nonatomic) int scale;
@property (nonatomic) int mergesCount;
@property (nonatomic) float rotationAngle;
@property (nonatomic) float yawAngle;
@property (nonatomic) BOOL hasPose;
@property (nonatomic) BOOL hasLabel;
@property (nonatomic) int label;
@property (retain, nonatomic) NSString *labelName;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } boxCenter;
@property (readonly, nonatomic) float distanceToDefaultBox;
@property (readonly, nonatomic) float smartDistance;

- (float)iOa:(id)a0;
- (float)overlap:(id)a0;
- (void).cxx_destruct;
- (BOOL)isOverlappingSmallFace:(id)a0 withOverlapThreshold:(float)a1 withSizeRatio:(float)a2;
- (BOOL)isOverlappingLowMergeDet:(id)a0 withOverlapThreshold:(float)a1 withMergeCountDelta:(int)a2;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 defaultBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 confidence:(float)a2 scale:(int)a3 rotationAngle:(float)a4 yawAngle:(float)a5 mergesCount:(int)a6 hasPose:(BOOL)a7;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 defaultBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 confidence:(float)a2 scale:(int)a3 rotationAngle:(float)a4 yawAngle:(float)a5 mergesCount:(int)a6 hasPose:(BOOL)a7 hasLabel:(BOOL)a8 label:(int)a9;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 defaultBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 confidence:(float)a2 scale:(int)a3 rotationAngle:(float)a4 yawAngle:(float)a5 mergesCount:(int)a6 hasPose:(BOOL)a7 hasLabel:(BOOL)a8 label:(int)a9 labelName:(id)a10;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 defaultBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 confidence:(float)a2 scale:(int)a3 rotationAngle:(float)a4 yawAngle:(float)a5 hasPose:(BOOL)a6;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 defaultBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 confidence:(float)a2 scale:(int)a3 rotationAngle:(float)a4 yawAngle:(float)a5 hasPose:(BOOL)a6 hasLabel:(BOOL)a7 label:(int)a8;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 defaultBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 confidence:(float)a2 scale:(int)a3 rotationAngle:(float)a4 yawAngle:(float)a5 hasPose:(BOOL)a6 hasLabel:(BOOL)a7 label:(int)a8 labelName:(id)a9;

@end
