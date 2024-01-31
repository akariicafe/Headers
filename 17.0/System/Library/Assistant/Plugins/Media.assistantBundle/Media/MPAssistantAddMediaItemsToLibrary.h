@class NSString, ICUserIdentity, MPCloudController;

@interface MPAssistantAddMediaItemsToLibrary : SAMPAddMediaItemsToLibrary <AFServiceCommand> {
    NSString *_requestAceHash;
    ICUserIdentity *_userIdentity;
    MPCloudController *_cloudController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_performWithCompletion:(id /* block */)a0;
- (void)performWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)_addMediaItemsToLibrarySupported;
- (long long)_extractAtomID;
- (void)_performAddMediaItemsWithCompletion:(id /* block */)a0;
- (void)_requestCompanionToAddMediaItemsForOrigin:(void *)a0 withCompletion:(id /* block */)a1;

@end
