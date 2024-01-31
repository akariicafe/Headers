@class NSNumber, NSString, MPCAssistantDiscovery, ICUserIdentity;

@interface MPAssistantAddMediaItemsToUpNextQueue : SAMPAddMediaItemsToUpNextQueue <AFServiceCommand> {
    MPCAssistantDiscovery *_discovery;
    ICUserIdentity *_userIdentity;
    NSNumber *_privateListeningEnabled;
    NSString *_requestAceHash;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_perform:(id /* block */)a0;
- (id)_createPlaybackQueueWithCollection:(id)a0 error:(id *)a1;
- (id)_createLocalLibraryPlaybackQueueWithCollection:(id)a0 error:(id *)a1;
- (id)_createStoreTracklistPlaybackQueueWithCollection:(id)a0 error:(id *)a1;
- (BOOL)_isInsertionPositionSupported:(int)a0 origin:(void *)a1 supportedCommands:(struct __CFArray { } *)a2;

@end
