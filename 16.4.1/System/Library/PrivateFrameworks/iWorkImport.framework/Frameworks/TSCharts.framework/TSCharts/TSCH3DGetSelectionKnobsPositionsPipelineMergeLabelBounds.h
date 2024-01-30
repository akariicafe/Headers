@class NSMutableArray;

@interface TSCH3DGetSelectionKnobsPositionsPipelineMergeLabelBounds : NSObject {
    NSMutableArray *_labelsBounds;
}

@property (readonly, nonatomic) int labelType;
@property (readonly, nonatomic) int knobsMode;

+ (id)boundsWithLabelType:(int)a0 knobsMode:(int)a1;

- (void).cxx_destruct;
- (void)addBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mergeBoundsIntoProjectedPoints:(id)a0;
- (void)addNewBoundsArray;
- (id)initWithLabelType:(int)a0 knobsMode:(int)a1;
- (BOOL)p_hasExtentPointsForBounds:(id)a0 returningMinPoint:(struct CGPoint { double x0; double x1; } *)a1 maxPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)p_isHorizontal;
- (struct CGPoint { double x0; double x1; })p_maxPoint:(struct CGPoint { double x0; double x1; })a0 otherPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })p_minPoint:(struct CGPoint { double x0; double x1; })a0 otherPoint:(struct CGPoint { double x0; double x1; })a1;

@end
