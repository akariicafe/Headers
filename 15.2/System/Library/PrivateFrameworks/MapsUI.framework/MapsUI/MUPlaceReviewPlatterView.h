@class UITapGestureRecognizer, MUPlaceReviewViewModel, UIImageView, UILayoutGuide, UIView, NSAttributedString, UILabel;
@protocol MULabelViewProtocol;

@interface MUPlaceReviewPlatterView : UIView {
    UIView<MULabelViewProtocol> *_reviewTextView;
    UILabel *_starLabel;
    UIView<MULabelViewProtocol> *_userLabel;
    UIImageView *_userAvatarImageView;
    UILayoutGuide *_userLabelLayoutGuide;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (readonly, nonatomic) NSAttributedString *userLabelString;
@property (readonly, nonatomic) NSAttributedString *starString;
@property (retain, nonatomic) MUPlaceReviewViewModel *viewModel;
@property (copy, nonatomic) id /* block */ actionHandler;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_contentSizeDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)_updateAppearance;
- (void)_setupSubviews;
- (id)_attributesWithFont:(id)a0 color:(id)a1;
- (void)_platterTapped;

@end
