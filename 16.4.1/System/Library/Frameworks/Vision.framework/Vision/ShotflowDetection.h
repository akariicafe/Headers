@interface ShotflowDetection : NSObject {
    float _area;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } box;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } defaultBox;
@property (nonatomic) float confidence;
@property (nonatomic) int scale;
@property (nonatomic) int mergesCount;
@property (nonatomic) float rotationAngle;
@property (nonatomic) float yawAngle;
@property (nonatomic) float pitchAngle;
@property (nonatomic) BOOL hasLabel;
@property (nonatomic) int label;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } boxCenter;
@property (readonly, nonatomic) float distanceToDefaultBox;
@property (readonly, nonatomic) float smartDistance;

- (id)description;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 defaultBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 confidence:(float)a2 scale:(int)a3 rotationAngle:(float)a4 yawAngle:(float)a5;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 defaultBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 confidence:(float)a2 scale:(int)a3 rotationAngle:(float)a4 yawAngle:(float)a5 hasLabel:(BOOL)a6 label:(int)a7;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 defaultBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 confidence:(float)a2 scale:(int)a3 rotationAngle:(float)a4 yawAngle:(float)a5 mergesCount:(int)a6;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 defaultBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 confidence:(float)a2 scale:(int)a3 rotationAngle:(float)a4 yawAngle:(float)a5 mergesCount:(int)a6 hasLabel:(BOOL)a7 label:(int)a8;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 defaultBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 confidence:(float)a2 scale:(int)a3 rotationAngle:(float)a4 yawAngle:(float)a5 pitchAngle:(float)a6 hasLabel:(BOOL)a7 label:(int)a8;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 defaultBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 confidence:(float)a2 scale:(int)a3 rotationAngle:(float)a4 yawAngle:(float)a5 pitchAngle:(float)a6 mergesCount:(int)a7 hasLabel:(BOOL)a8 label:(int)a9;
- (float)intersectionOverArea:(id)a0;
- (float)intersectionOverMinArea:(id)a0;
- (BOOL)isOverlappingLowMergeDet:(id)a0 withOverlapThreshold:(float)a1 withMergeCountDelta:(int)a2;
- (BOOL)isOverlappingSmallFace:(id)a0 withOverlapThreshold:(float)a1 withSizeRatio:(float)a2;
- (float)overlap:(id)a0;

@end
