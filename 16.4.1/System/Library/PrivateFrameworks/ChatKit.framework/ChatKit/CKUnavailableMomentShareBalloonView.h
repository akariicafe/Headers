@protocol CKUnavailableMomentShareBalloonViewDelegate;

@interface CKUnavailableMomentShareBalloonView : CKMomentShareStatusBalloonView

@property (weak, nonatomic) id<CKUnavailableMomentShareBalloonViewDelegate> delegate;

+ (id)_secondaryLabelString;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleTap:(id)a0;

@end
