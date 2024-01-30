@class NSNumber;

@interface HMIObjectDetection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) int labelIndex;
@property (readonly) double confidence;
@property (readonly) NSNumber *yaw;
@property (readonly) NSNumber *roll;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithLabelIndex:(int)a0 confidence:(double)a1 unclampedBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 yaw:(id)a3 roll:(id)a4;
- (id)initWithLabelIndex:(int)a0 confidence:(double)a1 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 yaw:(id)a3 roll:(id)a4;

@end
