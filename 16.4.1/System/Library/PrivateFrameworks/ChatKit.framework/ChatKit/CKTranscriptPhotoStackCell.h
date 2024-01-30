@class UIPinchGestureRecognizer;
@protocol CKTranscriptPhotoStackCellDelegate;

@interface CKTranscriptPhotoStackCell : CKTranscriptBalloonCell

@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (weak, nonatomic) id<CKTranscriptPhotoStackCellDelegate> delegate;

- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)handlePinchGesture:(id)a0;
- (void)layoutSubviewsForAlignmentContents;
- (id)photoStackBalloonView;
- (void)setWantsContactImageLayout:(BOOL)a0;

@end
