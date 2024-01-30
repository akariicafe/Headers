@class NSArray, NSString, TUCall;

@interface TUCallContainer : NSObject <TUCallContainerPrivate, TUCallContainer>

@property (copy, nonatomic) NSArray *calls;
@property (readonly, copy, nonatomic) NSArray *_allCalls;
@property (readonly, nonatomic) TUCall *displayedCall;
@property (readonly, nonatomic) TUCall *conferenceCall;
@property (readonly, nonatomic) TUCall *frontmostCall;
@property (readonly, retain, nonatomic) TUCall *frontmostAudioOrVideoCall;
@property (readonly, nonatomic) BOOL existingCallsHaveMultipleProviders;
@property (readonly, copy, nonatomic) NSArray *currentCalls;
@property (readonly, copy, nonatomic) NSArray *currentVideoCalls;
@property (readonly, copy, nonatomic) NSArray *currentAudioAndVideoCalls;
@property (readonly, copy, nonatomic) NSArray *incomingCalls;
@property (readonly, copy, nonatomic) NSArray *displayedCalls;
@property (readonly, copy, nonatomic) NSArray *displayedAudioAndVideoCalls;
@property (readonly, copy, nonatomic) NSArray *conferenceParticipantCalls;
@property (readonly, copy, nonatomic) NSArray *callsHostedElsewhere;
@property (readonly, copy, nonatomic) NSArray *callsWithAnEndpointElsewhere;
@property (readonly, copy, nonatomic) NSArray *callsHostedOrAnEndpointElsewhere;
@property (readonly, copy, nonatomic) NSArray *callsOnDefaultPairedDevice;
@property (readonly, nonatomic) TUCall *incomingCall;
@property (readonly, nonatomic) TUCall *incomingVideoCall;
@property (readonly, nonatomic) TUCall *activeVideoCall;
@property (readonly, nonatomic) TUCall *currentVideoCall;
@property (readonly, nonatomic) unsigned long long currentCallCount;
@property (readonly, nonatomic) unsigned long long currentVideoCallCount;
@property (readonly, nonatomic) unsigned long long currentAudioAndVideoCallCount;
@property (readonly, nonatomic) unsigned long long callCountOnDefaultPairedDevice;
@property (readonly, nonatomic) BOOL hasCurrentCalls;
@property (readonly, nonatomic) BOOL hasCurrentAudioCalls;
@property (readonly, nonatomic) BOOL hasCurrentVideoCalls;
@property (readonly, nonatomic) BOOL anyCallIsHostedOnCurrentDevice;
@property (readonly, nonatomic) BOOL anyCallIsEndpointOnCurrentDevice;
@property (readonly, copy, nonatomic) NSArray *currentCallGroups;
@property (readonly, copy, nonatomic) NSArray *currentAudioAndVideoCallGroups;
@property (readonly, copy, nonatomic) NSArray *callGroupsOnDefaultPairedDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)callsPassingTest:(id /* block */)a0;
- (BOOL)allCallsAreOfService:(int)a0;
- (id)audioAndVideoCallsWithStatus:(int)a0;
- (id)displayedCallFromCalls:(id)a0;
- (unsigned long long)countOfCallsPassingTest:(id /* block */)a0;
- (id)videoCallWithStatus:(int)a0;
- (id)callWithStatus:(int)a0;
- (id)callPassingTest:(id /* block */)a0 sortedUsingComparator:(id /* block */)a1;
- (id)callPassingTest:(id /* block */)a0;
- (BOOL)allCallsPassTest:(id /* block */)a0;
- (id)callWithCallUUID:(id)a0;
- (id)callWithUniqueProxyIdentifier:(id)a0;
- (id)callsWithStatus:(int)a0;
- (BOOL)anyCallPassesTest:(id /* block */)a0;
- (id)audioOrVideoCallWithStatus:(int)a0;
- (id)callsWithGroupUUID:(id)a0;
- (id)_callGroupsFromCalls:(id)a0;
- (id)initWithCalls:(id)a0;
- (void)enumerateCallsInvokingBlock:(id /* block */)a0 forCallsPassingTest:(id /* block */)a1;
- (void)enumerateCallsWithOptions:(unsigned long long)a0 invokingBlock:(id /* block */)a1 forCallsPassingTest:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (id)callPassingTest:(id /* block */)a0 withOptions:(unsigned long long)a1;

@end
