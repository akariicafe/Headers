@class NSArray, VNSaliencyImageObservation;

@interface PIReframeResult : NSObject

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) double confidence;
@property (retain, nonatomic) VNSaliencyImageObservation *saliencyObservation;
@property (copy, nonatomic) NSArray *ANODSubjects;

- (void).cxx_destruct;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 confidence:(double)a1 ANODSubjects:(id)a2 saliencyObservation:(id)a3;

@end
