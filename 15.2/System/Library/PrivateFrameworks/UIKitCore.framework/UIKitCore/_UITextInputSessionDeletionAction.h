@interface _UITextInputSessionDeletionAction : _UITextInputSessionAction

@property (nonatomic) unsigned long long deletionCount;

- (BOOL)changedContent;
- (long long)mergeActionIfPossible:(id)a0;

@end
