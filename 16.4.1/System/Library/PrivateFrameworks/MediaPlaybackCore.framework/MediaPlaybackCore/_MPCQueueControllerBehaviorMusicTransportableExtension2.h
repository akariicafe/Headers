@class NSString, NSArray, NSDictionary;
@protocol MPCQueueControllerSessionTypesInvalidatable;

@interface _MPCQueueControllerBehaviorMusicTransportableExtension2 : NSObject <MPCQueueControllerBehaviorTransportableExtension, MPCPlaybackAccountManagerObserver> {
    NSArray *_accounts;
    NSArray *_allKnownSessionInfos;
    NSDictionary *_sessionInfoMap;
}

@property (readonly, weak, nonatomic) id<MPCQueueControllerSessionTypesInvalidatable> sessionTypesInvalidatable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)accountManager:(id)a0 didChangeAccounts:(id)a1;
- (void).cxx_destruct;
- (void)_updateAllKnownSessionInfosForAccounts:(id)a0;
- (id)allKnownSessionTypes;
- (id)infoForSessionType:(id)a0;
- (id)initWithInvalidatable:(id)a0;
- (BOOL)isSupportedSessionType:(id)a0 reason:(id *)a1;

@end
