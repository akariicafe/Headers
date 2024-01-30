@interface _UITextInputSessionDeletionAction : _UITextInputSessionAction

@property (nonatomic) unsigned long long deletionCount;

- (long long)mergeActionIfPossible:(id)a0;
- (BOOL)changedContent;

@end
