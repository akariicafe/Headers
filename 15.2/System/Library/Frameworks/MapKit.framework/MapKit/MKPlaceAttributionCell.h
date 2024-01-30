@class NSArray, MKPlaceAttributionCellButton, NSLayoutConstraint, _MKUILabel, UITapGestureRecognizer;
@protocol MKPlaceAttributionCellDelegate;

@interface MKPlaceAttributionCell : MKPlaceSectionRowView <MKPlaceAttributionCellButtonDelegate> {
    NSArray *_visibleConstraints;
    NSLayoutConstraint *_collapsedConstraint;
    BOOL _highlighted;
}

@property (retain, nonatomic) _MKUILabel *label;
@property (retain, nonatomic) MKPlaceAttributionCellButton *labelButton;
@property (retain, nonatomic) NSLayoutConstraint *labelBaselineToTop;
@property (retain, nonatomic) NSLayoutConstraint *labelLastBaselineToBottom;
@property (retain, nonatomic) UITapGestureRecognizer *selectGestureRecognizer;
@property (weak, nonatomic) id<MKPlaceAttributionCellDelegate> cellDelegate;

+ (id)fontForLabel;

- (double)currentHeight;
- (void)setHighlighted:(BOOL)a0;
- (void)_contentSizeDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAttributionString:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (BOOL)isHighlighted;
- (void)attributionCellButton:(id)a0 isHighighted:(BOOL)a1 executeAction:(BOOL)a2;
- (void)attributionClicked;
- (void)createConstraints;

@end
