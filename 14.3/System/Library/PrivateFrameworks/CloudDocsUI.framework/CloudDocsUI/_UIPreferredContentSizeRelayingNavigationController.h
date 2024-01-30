@class NSString;

@interface _UIPreferredContentSizeRelayingNavigationController : UINavigationController <_UIPreferredContentSizeRelayingContainer>

@property (copy, nonatomic) id /* block */ preferredContentSizeDidChange;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;

@end
