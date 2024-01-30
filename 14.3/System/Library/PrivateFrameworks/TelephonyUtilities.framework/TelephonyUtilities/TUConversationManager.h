@class NSMapTable, TUConversationMediaController, NSSet, NSString, NSObject;
@protocol OS_dispatch_queue, TUConversationManagerDataSource;

@interface TUConversationManager : NSObject <TUConversationManagerDataSourceDelegate>

@property (class, readonly, nonatomic) BOOL supportsConversations;
@property (class, readonly, nonatomic, getter=isAddPersonEnabled) BOOL addPersonEnabled;
@property (class, readonly, nonatomic) unsigned long long maximumNumberOfInvitedMembers;
@property (class, readonly, nonatomic) BOOL allowsVideo;
@property (class, readonly, nonatomic) BOOL supportsEffects;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<TUConversationManagerDataSource> dataSource;
@property (readonly, nonatomic) NSMapTable *delegateToQueue;
@property (readonly, nonatomic) TUConversationMediaController *mediaController;
@property (readonly, copy, nonatomic) NSSet *activeConversations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)memorySize;

- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)removeDelegate:(id)a0;
- (void)registerWithCompletionHandler:(id /* block */)a0;
- (id)initWithDataSource:(id)a0;
- (id)activeConversationWithRemoteMembers:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)conversationsChangedForDataSource:(id)a0 oldConversationsByGroupUUID:(id)a1;
- (void)setDownlinkMuted:(BOOL)a0 forRemoteParticipantsInConversation:(id)a1;
- (void)buzzMember:(id)a0 conversation:(id)a1;
- (id)activeConversationWithGroupUUID:(id)a0;
- (void)serverDisconnectedForDataSource:(id)a0 oldConversationsByGroupUUID:(id)a1;
- (void)addRemoteMembers:(id)a0 toConversation:(id)a1;

@end
