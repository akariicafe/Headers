@class NSNumber;

@interface FRCFaceHandLegRectangle : NSObject

@property (nonatomic) unsigned long long category;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (copy, nonatomic) NSNumber *roll;
@property (copy, nonatomic) NSNumber *yaw;

+ (id)bodyRectangleWithCenter:(struct CGPoint { double x0; double x1; })a0 tip:(struct CGPoint { double x0; double x1; })a1 category:(unsigned long long)a2 frameAspectRatio:(float)a3;
+ (id)faceRectangleWithBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 roll:(id)a1 yaw:(id)a2;
+ (id)handRectangleWithObservation:(id)a0;
+ (id)humanRectangleWithBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void).cxx_destruct;

@end
