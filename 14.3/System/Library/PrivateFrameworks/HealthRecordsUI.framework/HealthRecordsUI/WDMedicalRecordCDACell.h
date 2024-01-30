@class HKSeparatorLineView, UIImageView, UILabel, UIView, HKCDADocumentSample;

@interface WDMedicalRecordCDACell : UITableViewCell

@property (retain, nonatomic) HKCDADocumentSample *cdaSample;
@property (retain, nonatomic) UIView *background;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) UILabel *patientTitle;
@property (retain, nonatomic) UILabel *patientLabel;
@property (retain, nonatomic) UILabel *institutionTitle;
@property (retain, nonatomic) UILabel *institutionLabel;
@property (retain, nonatomic) HKSeparatorLineView *separator;
@property (retain, nonatomic) UIImageView *discloseView;

- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)_adjustFont;
- (void)_setupSubviews;
- (void)traitCollectionDidChange:(id)a0;

@end
