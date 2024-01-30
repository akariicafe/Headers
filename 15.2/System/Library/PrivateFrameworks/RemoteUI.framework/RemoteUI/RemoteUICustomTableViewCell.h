@class UIStackView, UITextField, UIImageView, UILabel, RUIImageView;

@interface RemoteUICustomTableViewCell : RemoteUITableViewCell

@property (retain, nonatomic) UILabel *customTextLabelInternal;
@property (retain, nonatomic) UILabel *customDetailTextLabelInternal;
@property (retain, nonatomic) UILabel *customValueLabelInternal;
@property (retain, nonatomic) UITextField *customEditableTextFieldInternal;
@property (retain, nonatomic) RUIImageView *customImageViewInternal;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIStackView *verticalStackView;
@property (readonly, nonatomic) UILabel *customTextLabel;
@property (readonly, nonatomic) UILabel *customDetailTextLabel;
@property (readonly, nonatomic) UILabel *customValueLabel;
@property (readonly, nonatomic) UITextField *customEditableTextField;
@property (readonly, nonatomic) UIImageView *customImageView;

- (void).cxx_destruct;
- (void)addDetailLinkButton:(id)a0;
- (void)_initializeViews;
- (id)_textLabelInternal;
- (id)_detailTextLabelInternal;
- (id)_imageViewInternal;
- (id)_valueLabelInternal;
- (id)_editableTextFieldInternal;
- (double)_imageViewToTextMargin;
- (double)_defaultImageViewMaxWidth;

@end
