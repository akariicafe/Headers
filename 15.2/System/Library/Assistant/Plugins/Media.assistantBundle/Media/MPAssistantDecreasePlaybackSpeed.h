@class NSString;

@interface MPAssistantDecreasePlaybackSpeed : SANPDecreasePlaybackSpeed <AFServiceCommand> {
    NSString *_requestAceHash;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
