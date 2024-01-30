@class NSString, ICUserIdentity;

@interface MPAssistantLikesMediaEntity : SAMPLikesMediaEntity {
    NSString *_requestAceHash;
    ICUserIdentity *_userIdentity;
}

- (void)performWithCompletion:(id /* block */)a0;
- (void)_performWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
