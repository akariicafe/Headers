@class UIColor, UISelectionFeedbackGenerator;

@interface PSSegmentableSlider : UISlider {
    UIColor *_trackMarkersColor;
}

@property (retain, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator;
@property (nonatomic, getter=isSegmented) BOOL segmented;
@property (nonatomic) BOOL locksToSegment;
@property (nonatomic) BOOL snapsToSegment;
@property (nonatomic) unsigned long long segmentCount;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 trackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 value:(float)a2;
- (void)setValue:(float)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)controlInteractionBegan:(id)a0;
- (void)controlInteractionEnded:(id)a0;
- (unsigned long long)numberOfTicks;
- (float)offsetBetweenTicksForNumberOfTicks:(unsigned long long)a0;
- (void)sliderTapped:(id)a0;

@end
