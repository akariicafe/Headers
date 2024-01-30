@protocol SiriAppsFooterViewDelegate;

@interface SiriAppsFooterView : PSFooterHyperlinkView

@property (weak, nonatomic) id<SiriAppsFooterViewDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithSpecifier:(id)a0;
- (void)didTapLearnMore:(id)a0;

@end
