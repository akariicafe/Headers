@interface _UITextInputSessionDeletionAction : _UITextInputSessionAction

@property (nonatomic) unsigned long long removedTextLength;
@property (nonatomic) unsigned long long removedEmojiCount;
@property (nonatomic) unsigned long long options;

- (long long)inputActionCount;
- (id)description;
- (BOOL)changedContent;
- (long long)mergeActionIfPossible:(id)a0;

@end
