@class UIButton, UIImageView;

@interface WGWidgetListEditViewTableViewCell : UITableViewCell {
    UIImageView *_dotImageView;
}

@property (nonatomic, getter=isWidgetEnabled) BOOL widgetEnabled;
@property (nonatomic) BOOL showsDot;
@property (readonly, weak, nonatomic) UIButton *insertWidgetAccessoryButton;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
