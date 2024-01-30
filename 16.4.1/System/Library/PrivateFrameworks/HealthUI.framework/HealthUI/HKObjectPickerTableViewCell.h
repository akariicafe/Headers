@class UIStackView, NSString, NSAttributedString, UIView, NSArray, UIImageView, UILabel, HKObjectPickerDetailView;

@interface HKObjectPickerTableViewCell : UITableViewCell {
    long long _presentationOptions;
}

@property (class, readonly, copy) NSString *defaultReuseIdentifier;

@property (retain, nonatomic) UILabel *primaryLabel;
@property (retain, nonatomic) UILabel *secondaryLabel;
@property (retain, nonatomic) UIStackView *recordDetailStackView;
@property (retain, nonatomic) HKObjectPickerDetailView *patientDetailView;
@property (retain, nonatomic) UIStackView *labelStackView;
@property (retain, nonatomic) UIImageView *checkboxView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UIView *secondSeparatorView;
@property (retain, nonatomic) UIStackView *contentStackView;
@property (nonatomic) BOOL checked;
@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *secondaryText;
@property (copy, nonatomic) NSAttributedString *secondaryAttributedText;
@property (copy, nonatomic) NSArray *detailItems;
@property (copy, nonatomic) NSString *patientName;
@property (copy, nonatomic) NSArray *patientDetails;

- (void)prepareForReuse;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)_setupSubviews;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 presentationOptions:(long long)a2;

@end
