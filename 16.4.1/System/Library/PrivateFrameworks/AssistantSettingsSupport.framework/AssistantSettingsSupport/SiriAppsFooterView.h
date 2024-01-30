@protocol SiriAppsFooterViewDelegate;

@interface SiriAppsFooterView : PSFooterHyperlinkView

@property (weak, nonatomic) id<SiriAppsFooterViewDelegate> delegate;

- (id)initWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)didTapLearnMore:(id)a0;

@end
