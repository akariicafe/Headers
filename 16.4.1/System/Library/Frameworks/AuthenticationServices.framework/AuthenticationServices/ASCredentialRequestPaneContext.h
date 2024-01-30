@class ASCredentialRequestPaneViewController, UIStackView;

@interface ASCredentialRequestPaneContext : NSObject

@property (readonly, weak, nonatomic) ASCredentialRequestPaneViewController *paneViewController;
@property (readonly, nonatomic) UIStackView *stackView;

- (void).cxx_destruct;
- (void)addEmptyViewWithSpacing:(double)a0;
- (id)initWithPaneViewController:(id)a0 stackView:(id)a1;
- (void)addSubPane:(id)a0 withCustomSpacingAfter:(double)a1;

@end
