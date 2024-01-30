@interface HUCameraEventSpacerCell : UICollectionViewCell

@property (nonatomic) BOOL spansMultipleDays;
@property (nonatomic) BOOL needsFullDashedLineWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithRecordingEvent:(id)a0 previousEvent:(id)a1 spanningMultipleDays:(BOOL)a2;

@end
