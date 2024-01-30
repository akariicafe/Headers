@class NSMutableSet, UIStackView;
@protocol PKWeekdaySelectorDelegate;

@interface PKWeekdaySelector : UIView {
    UIStackView *_stackView;
    NSMutableSet *_selectedWeekdays;
    NSMutableSet *_possibleWeekdays;
}

@property (weak, nonatomic) id<PKWeekdaySelectorDelegate> delegate;

- (void)setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)setUserInteractionEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)_weekdayTapped:(id)a0;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (void)setSelectedDays:(id)a0 possibleDays:(id)a1;

@end
