@class NSString, UITextField;

@interface HUAlarmEditableTextCell : UITableViewCell <UITextFieldDelegate>

@property (readonly, nonatomic) UITextField *textField;
@property (nonatomic) long long autocapitalizationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)layoutSubviews;
- (void)setUserInteractionEnabled:(BOOL)a0;

@end
