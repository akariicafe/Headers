@class UIStackView, NSArray, UILabel, _HKDocumentImageView, HKAdjustableTapTargetButton;
@protocol HKCDADocumentTableViewCellDelegate;

@interface HKCDADocumentTableViewCell : UITableViewCell {
    _HKDocumentImageView *_documentImageView;
    UILabel *_titleLabel;
    NSArray *_cellLabels;
    UIStackView *_imageLabelStack;
}

@property (retain, nonatomic) HKAdjustableTapTargetButton *checkboxButton;
@property (nonatomic) BOOL showsCheckbox;
@property (nonatomic, getter=isChecked) BOOL checked;
@property (weak, nonatomic) id<HKCDADocumentTableViewCellDelegate> delegate;

- (void)_updateForCurrentSizeCategory;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)setCellValuesForDocumentSample:(id)a0;
- (id)_createDocumentCellLabelWithTag:(long long)a0 fontSizePts:(double)a1 flexibleHeight:(BOOL)a2;
- (void)_selectedCheckbox:(id)a0;
- (void)_setDocumentLabelWithTag:(long long)a0 text:(id)a1 view:(id)a2;
- (void)_setupCellStructure;

@end
