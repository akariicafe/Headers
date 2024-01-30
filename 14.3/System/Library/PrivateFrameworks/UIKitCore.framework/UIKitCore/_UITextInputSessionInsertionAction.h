@interface _UITextInputSessionInsertionAction : _UITextInputSessionAction

@property (nonatomic) unsigned long long textLength;

- (long long)mergeActionIfPossible:(id)a0;
- (BOOL)changedContent;

@end
