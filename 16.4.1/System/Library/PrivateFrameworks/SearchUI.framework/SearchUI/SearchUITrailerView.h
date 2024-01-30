@class SFPunchout, SearchUITrailersCardSectionView, TLKLabel, SearchUIButton, UIView;

@interface SearchUITrailerView : TLKStackView

@property (weak, nonatomic) SearchUITrailersCardSectionView *cardSectionView;
@property (retain, nonatomic) SearchUIButton *playButton;
@property (retain, nonatomic) TLKLabel *titleLabel;
@property (retain, nonatomic) SFPunchout *punchout;
@property (retain, nonatomic) UIView *centeredBoxView;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)playTrailer;
- (id)initWithMediaItem:(id)a0 cardSectionView:(id)a1;

@end
