@class NSString, ICUserIdentity, MPCloudController;

@interface MPAssistantAddMediaItemsToPlaylist : SAMPAddMediaItemsToPlaylist <AFServiceCommand> {
    NSString *_requestAceHash;
    ICUserIdentity *_userIdentity;
    MPCloudController *_cloudController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_notifyAssistantWithError:(id)a0 requestHash:(id)a1 completion:(id /* block */)a2;
+ (void)_notifyAssistantWithString:(id)a0 requestHash:(id)a1 completion:(id /* block */)a2;

- (void)dealloc;
- (void)performWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_addItemsToCloudLibrary:(id /* block */)a0;
- (void)_appendItemsToCloudPlaylist:(id)a0 completion:(id /* block */)a1;
- (void)_addItemsToLocalLibrary:(id /* block */)a0;
- (void)_appendItemToCloudPlaylist:(id)a0 completion:(id /* block */)a1;
- (void)_appendToPlaylistWithCompletion:(id /* block */)a0;
- (BOOL)_isSagaAuthenticated;
- (void)_prependItemsToCloudPlaylist:(id)a0 completion:(id /* block */)a1;

@end
