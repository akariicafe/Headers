@class PRXButton, NSArray, UIView, PRXLabel;

@interface PRXDisclaimerContentView : PRXScrollableContentView {
    UIView *_disclaimerContainerView;
    NSArray *_contentConstraints;
}

@property (readonly, nonatomic) PRXLabel *disclaimerLabel;
@property (retain, nonatomic) PRXButton *moreInfoButton;

- (void)updateConstraints;
- (void).cxx_destruct;
- (id)initWithCardStyle:(long long)a0;

@end
