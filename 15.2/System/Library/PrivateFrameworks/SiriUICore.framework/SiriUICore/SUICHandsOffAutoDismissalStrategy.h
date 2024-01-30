@interface SUICHandsOffAutoDismissalStrategy : SUICAutoDismissalStrategy

- (BOOL)shouldDismiss;
- (double)idleTimeInterval;

@end
