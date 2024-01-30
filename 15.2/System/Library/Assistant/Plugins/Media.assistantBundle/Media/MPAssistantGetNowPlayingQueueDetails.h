@class NSString;

@interface MPAssistantGetNowPlayingQueueDetails : SANPGetNowPlayingQueueDetails <AFServiceCommand> {
    NSString *_requestAceHash;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)getSAMPMediaItems:(struct { long long x0; long long x1; })a0 origin:(void *)a1 completion:(id /* block */)a2;

@end
