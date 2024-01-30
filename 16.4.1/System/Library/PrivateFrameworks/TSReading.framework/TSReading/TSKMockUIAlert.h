@interface TSKMockUIAlert : TSKUIAlert

+ (void)setDismissalButtonIndex:(long long)a0;

- (long long)cancelButtonIndex;
- (long long)firstOtherButtonIndex;
- (id)initWithTitle:(id)a0 message:(id)a1 cancelButtonTitle:(id)a2 otherButtonTitle:(id)a3;
- (void)showWithDismissedByButtonBlock:(id /* block */)a0;

@end
