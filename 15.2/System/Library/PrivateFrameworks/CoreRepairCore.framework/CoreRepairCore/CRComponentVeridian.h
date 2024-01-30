@class NSString;

@interface CRComponentVeridian : CRComponentBase {
    NSString *identiferBase64;
}

+ (id)sharedSingleton;

- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (void)challengeComponentWith:(id)a0 withReply:(id /* block */)a1;
- (id)identiferBase64;
- (void)setIdentiferBase64:(id)a0;
- (void)signVeridianWith:(id)a0 withReply:(id /* block */)a1;

@end
