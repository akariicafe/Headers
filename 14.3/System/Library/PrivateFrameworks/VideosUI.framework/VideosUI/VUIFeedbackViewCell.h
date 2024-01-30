@class VUIFeedbackView, IKViewElement;

@interface VUIFeedbackViewCell : VUIFocusableCollectionViewCell

@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) VUIFeedbackView *cardView;

+ (id)configureViewWithElement:(id)a0 existingCell:(id)a1;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_setupElements:(id)a0 inCardView:(id)a1;

@end
