@class TLKTextButton, NUIContainerStackView, NSString;

@interface SearchUIHorizontallyScrollingTextButtonController : SearchUIHorizontallyScrollingButtonController <NUIContainerViewDelegate>

@property (retain, nonatomic) TLKTextButton *button;
@property (retain, nonatomic) NUIContainerStackView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (struct CGSize { double x0; double x1; })containerView:(id)a0 systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a1 forArrangedSubview:(id)a2;
- (BOOL)wantsSeparators;
- (BOOL)scrollsWithoutStoppingAtBoundaries;
- (void)setCardSectionRowModel:(id)a0;

@end
