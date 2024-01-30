@class NSString;

@interface CRComponentTsid : CRComponentBase {
    NSString *identiferBase64;
}

+ (id)sharedSingleton;

- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (void)challengeComponentWith:(id)a0 withReply:(id /* block */)a1;
- (id)identiferBase64;
- (void)setIdentiferBase64:(id)a0;
- (BOOL)connectToIO:(unsigned int *)a0 withError:(id *)a1;
- (BOOL)issueChallenge:(id)a0 index:(int)a1 reponse:(id *)a2 options:(unsigned long long)a3 connection:(unsigned int)a4 withError:(id *)a5;

@end
