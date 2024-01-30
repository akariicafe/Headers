@class VNTorsoprint;

@interface VCPHuman : NSObject

@property unsigned long long flags;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property float confidence;
@property (retain) VNTorsoprint *torsoprint;

+ (unsigned long long)flagsFromKeypoints:(id)a0 withMinConfidence:(float)a1;

- (id)init;
- (void).cxx_destruct;

@end
