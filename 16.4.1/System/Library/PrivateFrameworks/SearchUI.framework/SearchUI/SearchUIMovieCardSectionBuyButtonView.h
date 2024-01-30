@class SFPunchout, SearchUIOfferButtonView, SearchUILabel, SearchUIMovieCardSectionView;

@interface SearchUIMovieCardSectionBuyButtonView : TLKStackView

@property (retain, nonatomic) SearchUILabel *subtitleLabel;
@property (retain, nonatomic) SearchUIOfferButtonView *button;
@property (retain, nonatomic) SFPunchout *punchout;
@property (weak, nonatomic) SearchUIMovieCardSectionView *cardSectionView;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)buttonPressed;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 punchout:(id)a2 cardSectionView:(id)a3;

@end
