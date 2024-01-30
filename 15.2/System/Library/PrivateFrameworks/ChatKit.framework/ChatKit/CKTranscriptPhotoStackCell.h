@class UIPinchGestureRecognizer;
@protocol CKTranscriptPhotoStackCellDelegate;

@interface CKTranscriptPhotoStackCell : CKTranscriptBalloonCell

@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (weak, nonatomic) id<CKTranscriptPhotoStackCellDelegate> delegate;

- (void)layoutSubviews;
- (void)layoutSubviewsForAlignmentContents;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setWantsContactImageLayout:(BOOL)a0;
- (void).cxx_destruct;
- (id)photoStackBalloonView;
- (void)handlePinchGesture:(id)a0;

@end
