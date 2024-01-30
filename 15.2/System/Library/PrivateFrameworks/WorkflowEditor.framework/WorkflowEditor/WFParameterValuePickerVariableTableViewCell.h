@class NSAttributedString;

@interface WFParameterValuePickerVariableTableViewCell : UITableViewCell

@property (retain, nonatomic) NSAttributedString *variableAttributedText;

- (void).cxx_destruct;
- (void)updateConfigurationUsingState:(id)a0;
- (id)configurationState;
- (void)tintColorDidChange;

@end
