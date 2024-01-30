@class NSArray;

@interface OKPanGenerator : NSObject {
    NSArray *_panSteps;
}

@property (nonatomic) double mediaItemAspectRatio;
@property (retain, nonatomic) NSArray *mediaItemRegionsOfInterest;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } referenceFrame;
@property (nonatomic) unsigned long long panningType;
@property (nonatomic) unsigned long long randomizer;
@property (nonatomic) BOOL isReversed;
@property (nonatomic) BOOL loops;

- (id)init;
- (void)dealloc;
- (id)initWithAspectRatio:(double)a0;
- (id)_panStepWithRelativeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forFittingMode:(unsigned long long)a1 anchorPoint:(struct CGPoint { double x0; double x1; })a2 andExtraScale:(double)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameWithAspectRatio:(double)a0 forFittingMode:(unsigned long long)a1 andAnchorPoint:(struct CGPoint { double x0; double x1; })a2;
- (id)_panStepWithRelativeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forFittingMode:(unsigned long long)a1 andAnchorPoint:(struct CGPoint { double x0; double x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_fullROI;
- (void)_updatePanSteps;
- (void)enumeratePanStepsWithBlock:(id /* block */)a0;

@end
