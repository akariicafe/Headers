@class MPCPlaybackIntent, ICLiveLink, ICLiveLinkIdentity, NSString, MSVSectionedCollection, NSIndexPath, MSVBlockGuard;

@interface MPCSharedListeningPlaybackIntentDataSource : NSObject <ICLiveLinkDelegate, MPCPlaybackIntentDataSource>

@property (retain, nonatomic) MSVBlockGuard *guard;
@property (nonatomic) long long shuffleMode;
@property (retain, nonatomic) id strongSelf;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (nonatomic) long long buildState;
@property (nonatomic) long long sourceState;
@property (retain, nonatomic) MPCPlaybackIntent *initialIntent;
@property (copy, nonatomic) NSIndexPath *startIndexPath;
@property (retain, nonatomic) MSVSectionedCollection *initialTracklist;
@property (nonatomic) long long linkState;
@property (retain, nonatomic) ICLiveLink *liveLink;
@property (retain, nonatomic) ICLiveLinkIdentity *identity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didStartLiveLink:(id)a0;
- (void)liveLink:(id)a0 didEncounterError:(id)a1 willRetry:(BOOL)a2;
- (void)liveLink:(id)a0 didUpdateQueue:(id)a1;
- (void)_transitionToSourceState:(long long)a0 error:(id)a1;
- (void)_transitionToBuildState:(long long)a0;
- (void)_transitionToBuildState:(long long)a0 intent:(id)a1 error:(id)a2;
- (void)_transitionToLiveLinkState:(long long)a0;
- (void)_transitionToLiveLinkState:(long long)a0 error:(id)a1;
- (void)_transitionToSourceState:(long long)a0;
- (void)buildSharedSessionIntentWithIntent:(id)a0 identity:(id)a1 completion:(id /* block */)a2;
- (void)getRemotePlaybackQueueFromIntent:(id)a0 destination:(long long)a1 completion:(id /* block */)a2;
- (void)getRepresentativeObjectFromIntent:(id)a0 properties:(id)a1 completion:(id /* block */)a2;

@end
