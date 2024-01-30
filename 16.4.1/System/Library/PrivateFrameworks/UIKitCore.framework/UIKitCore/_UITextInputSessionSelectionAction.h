@interface _UITextInputSessionSelectionAction : _UITextInputSessionAction

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rangeAfter;

- (id)description;
- (long long)mergeActionIfPossible:(id)a0;
- (long long)textInputActionsType;

@end
