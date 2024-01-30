@class NSString, NSMutableDictionary, NSMutableSet, TUConversation, NSObject;
@protocol TUCollaborationProvider, TUFeatureFlags, OS_dispatch_queue, TUCollaborationManagerDelegate;

@interface TUCollaborationManager : NSObject <TUCollaborationProviderDelegate, TUConversationManagerDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableDictionary *collaborationStateByIdentifier;
@property (retain, nonatomic) NSString *pendingCollaborationToAdd;
@property (retain, nonatomic) TUConversation *pendingConversationToAdd;
@property (readonly, nonatomic) id<TUCollaborationProvider> collaborationProvider;
@property (weak, nonatomic) id<TUCollaborationManagerDelegate> delegate;
@property (retain, nonatomic) NSMutableSet *pendingHighlightIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *originatingParticipantByHighlightIdentifier;
@property (retain, nonatomic) NSMutableDictionary *highlightsByIdentifier;
@property (retain, nonatomic) NSMutableDictionary *conversationsByHighlightIdentifier;
@property (readonly, nonatomic) id<TUFeatureFlags> featureFlags;
@property (readonly, nonatomic) BOOL isIpad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)conversationManager:(id)a0 stateChangedForConversation:(id)a1;
- (long long)collaborationStateForConversation:(id)a0;
- (BOOL)isCollaborationLocallyInitiatedForConversation:(id)a0;
- (void)notifyDelegateOfHighlightChanged:(id)a0 onConversation:(id)a1;
- (void)participant:(id)a0 removedHighlightFromConversation:(id)a1 highlightIdentifier:(id)a2;
- (void)participant:(id)a0 reAddedHighlightToConversation:(id)a1 highlightIdentifier:(id)a2;
- (void)queueCollaborationIdentifierForCollaboration:(id)a0 toConversation:(id)a1;
- (void)startTrackingCollaborationIfNecessaryAndNotifyDelegate:(id)a0 forConversation:(id)a1;
- (void)setCollaborationState:(long long)a0 forCollaborationIdentifier:(id)a1;
- (id)collaborationForConversation:(id)a0;
- (id)initWithCollaborationProvider:(id)a0;
- (void)stopTrackingHighlightForConversation:(id)a0;
- (void)associateCollaborationWithNewConversation:(id)a0;
- (void)collaborationsDidChange:(id)a0;
- (void)participant:(id)a0 addedHighlightToConversation:(id)a1 highlightIdentifier:(id)a2 oldHighlightIdentifier:(id)a3 isFirstAdd:(BOOL)a4;
- (id)initWithCollaborationProvider:(id)a0 featureFlags:(id)a1 deviceSupport:(id)a2;
- (void).cxx_destruct;
- (void)vendNoticeForCollaboration:(id)a0 participant:(id)a1 forConversation:(id)a2 type:(long long)a3;

@end
