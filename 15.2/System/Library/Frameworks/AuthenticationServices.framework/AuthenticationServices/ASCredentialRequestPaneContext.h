@class ASCredentialRequestPaneViewController, UIStackView;

@interface ASCredentialRequestPaneContext : NSObject

@property (readonly, nonatomic) ASCredentialRequestPaneViewController *paneViewController;
@property (readonly, nonatomic) UIStackView *stackView;

- (void).cxx_destruct;
- (void)addSubPane:(id)a0 withCustomSpacingAfter:(double)a1;
- (id)initWithPaneViewController:(id)a0 stackView:(id)a1;
- (void)addEmptyViewWithSpacing:(double)a0;

@end
