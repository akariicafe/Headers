@class UIStackView, WFParameter, UIImageView, WFCodableAttributeBackedSubstitutableState, UILabel, NSLayoutConstraint;
@protocol WFParameterValuePickable;

@interface WFParameterValuePickerTableViewCell : UITableViewCell

@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly, nonatomic) UIImageView *iconImageView;
@property (readonly, nonatomic) NSLayoutConstraint *iconImageViewWidgetConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *subtitleHeightConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *subtitleTopConstraint;
@property (readonly, nonatomic) UIStackView *contentStackView;
@property (readonly, nonatomic) UIStackView *labelsStackView;
@property (retain, nonatomic) WFParameter<WFParameterValuePickable> *parameter;
@property (retain, nonatomic) WFCodableAttributeBackedSubstitutableState *state;

- (void)tintColorDidChange;
- (void).cxx_destruct;
- (id)configurationState;
- (id)defaultContentConfiguration;
- (void)updateConfigurationUsingState:(id)a0;

@end
