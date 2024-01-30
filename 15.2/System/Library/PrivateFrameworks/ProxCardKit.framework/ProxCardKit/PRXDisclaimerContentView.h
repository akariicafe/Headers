@class PRXButton, NSArray, UIView, PRXLabel;

@interface PRXDisclaimerContentView : PRXScrollableContentView {
    UIView *_disclaimerContainerView;
    NSArray *_contentConstraints;
}

@property (readonly, nonatomic) PRXLabel *disclaimerLabel;
@property (retain, nonatomic) PRXButton *moreInfoButton;

- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithCardStyle:(long long)a0;

@end
