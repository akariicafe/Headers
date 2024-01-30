@class UIStackView, NSArray, UIImageView, HUCCFakeMosaicGridView, UILabel, HUMosaicLayoutGeometry;
@protocol HUProvidesMosaicFrames;

@interface HUCCInfoMosaicGridView : UIView

@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UILabel *actionLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) HUCCFakeMosaicGridView *backgroundGridView;
@property (retain, nonatomic) NSArray *infoMosaicConstraints;
@property (weak, nonatomic) id<HUProvidesMosaicFrames> frameDelegate;
@property (retain, nonatomic) HUMosaicLayoutGeometry *mosaicLayoutGeometry;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_invalidateConstraints;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)resetView;
- (void)_setupInfoMosaicView;
- (void)updateUIWithInfoText:(id)a0 andActionText:(id)a1;

@end
