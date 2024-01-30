@class UILabel, HKSource;

@interface WDSourceMessageViewController : HKViewController {
    UILabel *_messageLabel;
    HKSource *_source;
}

@property (readonly, nonatomic) long long style;

- (void).cxx_destruct;
- (void)_updateFont;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)a0 source:(id)a1;

@end
