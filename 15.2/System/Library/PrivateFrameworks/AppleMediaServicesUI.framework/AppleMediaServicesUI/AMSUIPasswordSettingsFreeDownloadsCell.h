@class UISwitch;
@protocol AMSUIPasswordSettingsFreeDownloadsCellDelegate;

@interface AMSUIPasswordSettingsFreeDownloadsCell : UITableViewCell

@property (nonatomic) id<AMSUIPasswordSettingsFreeDownloadsCellDelegate> delegate;
@property (retain, nonatomic) UISwitch *toggle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_setup;
- (long long)selectionStyle;
- (void).cxx_destruct;
- (void)_toggleChanged:(id)a0;

@end
