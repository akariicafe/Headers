@class UILabel, HKSource;

@interface WDSourceMessageViewController : HKViewController {
    UILabel *_messageLabel;
    HKSource *_source;
}

@property (readonly, nonatomic) long long style;

- (void)viewDidLoad;
- (void)_updateFont;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithStyle:(long long)a0 source:(id)a1;

@end
