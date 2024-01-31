@class NSString, ICUserIdentity;

@interface MPAssistantDislikesMediaEntity : SAMPDislikesMediaEntity <AFServiceCommand> {
    NSString *_requestAceHash;
    ICUserIdentity *_userIdentity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_performWithCompletion:(id /* block */)a0;
- (void)performWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
