@interface _UITextInputSessionDictationBeganAction : _UITextInputSessionAction

@property (nonatomic) unsigned long long dictationBeganCount;
@property (nonatomic) unsigned long long modelessUsedAtLeastOnceCount;
@property (nonatomic) unsigned long long multiModalDictationBeganCount;

- (long long)inputActionCount;
- (id)description;
- (long long)mergeActionIfPossible:(id)a0;

@end
