@class UILabel, UIButton;
@protocol WDCheckmarkTableViewCellDelegate;

@interface WDCheckmarkTableViewCell : UITableViewCell {
    UILabel *_displayLabel;
    UIButton *_button;
}

@property (weak, nonatomic) id<WDCheckmarkTableViewCellDelegate> delegate;
@property (nonatomic, getter=isOn) BOOL on;

+ (id)reuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setDisplayText:(id)a0;
- (void).cxx_destruct;
- (void)_setupUI;
- (void)clickToggle:(id)a0;

@end
