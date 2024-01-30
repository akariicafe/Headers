@class IKTextElement, _TVImageView, IKViewElement, IKImageElement, UIView, _TVLabel;

@interface VUIPopoverTableViewCell : UITableViewCell

@property (nonatomic, getter=isImageLoaded) BOOL imageLoaded;
@property (retain, nonatomic) UIView *cardView;
@property (retain, nonatomic) UIView *dimmingView;
@property (retain, nonatomic) _TVImageView *tvImageView;
@property (retain, nonatomic) _TVLabel *tvLabel;
@property (retain, nonatomic) IKViewElement *cardElement;
@property (retain, nonatomic) IKTextElement *textElement;
@property (retain, nonatomic) IKImageElement *imageElement;
@property (nonatomic) double preferredHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
