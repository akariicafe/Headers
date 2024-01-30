@class UIStackView, UIImageView, UILabel, UIButton;

@interface RUICustomLinkTableViewCell : RemoteUITableViewCell {
    id /* block */ _detailLinkHandler;
    UIButton *_detailLinkButton;
}

@property (retain, nonatomic) UILabel *customLinkTextLabelInternal;
@property (retain, nonatomic) UILabel *customLinkDetailTextLabelInternal;
@property (retain, nonatomic) UILabel *customLinkSubLabelInternal;
@property (retain, nonatomic) UIImageView *customImageViewInternal;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIStackView *innerStackView;
@property (readonly, nonatomic) UILabel *customLinkTextLabel;
@property (readonly, nonatomic) UILabel *customLinkDetailTextLabel;
@property (readonly, nonatomic) UILabel *customLinkSubLabel;
@property (readonly, nonatomic) UIImageView *customLinkImageView;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setDetailLinkText:(id)a0 handler:(id /* block */)a1;
- (void)_detailLinkPressed;
- (void)addDetailLinkButton:(id)a0;
- (void)_initializeViews;
- (id)_textLabelInternal;
- (id)_detailTextLabelInternal;
- (id)_subLabelInternal;
- (id)_imageViewInternal;

@end
