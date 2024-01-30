@class UILabel, UIImageView, NSOperationQueue;

@interface HUDiagnosticsPosterFrameCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (weak, nonatomic) NSOperationQueue *diagnosticOperationQueue;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateHeroFrameWithCameraClip:(id)a0 clipManager:(id)a1;
- (void)updateWithPosterFrame:(id)a0 cameraClip:(id)a1 clipManager:(id)a2;

@end
