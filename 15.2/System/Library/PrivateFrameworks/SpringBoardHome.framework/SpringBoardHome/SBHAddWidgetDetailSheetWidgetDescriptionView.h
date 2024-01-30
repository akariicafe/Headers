@class UILabel;

@interface SBHAddWidgetDetailSheetWidgetDescriptionView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;

- (void)_createConstraints;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (id)_titleLabelFont;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)dealloc;
- (id)initWithTitle:(id)a0 subtitle:(id)a1;
- (id)_descriptionLabelFont;

@end
