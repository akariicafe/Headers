@interface _UITextInputSessionInsertionAction : _UITextInputSessionAction

@property (nonatomic) unsigned long long textLength;
@property (nonatomic) unsigned long long options;

- (BOOL)changedContent;
- (long long)mergeActionIfPossible:(id)a0;

@end
