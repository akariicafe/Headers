@class NSArray, NSMutableDictionary, NSMutableOrderedSet;
@protocol GKMultiplayerDataSourceDelegate;

@interface GKMultiplayerDataSource : GKBasicCollectionViewDataSource

@property (retain, nonatomic) NSMutableDictionary *playerStatus;
@property (retain, nonatomic) NSMutableOrderedSet *players;
@property (retain, nonatomic) NSMutableOrderedSet *orderedPlayerIDList;
@property (weak, nonatomic) id<GKMultiplayerDataSourceDelegate> delegate;
@property (nonatomic) long long minPlayers;
@property (nonatomic) long long maxPlayers;
@property (nonatomic) long long automatchPlayerCount;
@property (nonatomic) BOOL automatchAddedToMinInHeader;
@property (nonatomic) BOOL removingEnabled;
@property (nonatomic) BOOL invitingEnabled;
@property (readonly, nonatomic) BOOL autoMatching;
@property (readonly, nonatomic) BOOL canCancelCurrentMatchmaking;
@property (readonly, nonatomic) BOOL haveNonGuestPlayers;
@property (readonly, nonatomic) NSArray *participants;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)playersInvited;
- (BOOL)havePendingPlayers;
- (id)guestPlayers;
- (void)setAutomatchPlayerCount:(long long)a0 complete:(id /* block */)a1;
- (void)replaceContactPlayers:(id)a0 withNormalPlayers:(id)a1 complete:(id /* block */)a2;
- (long long)statusForPlayer:(id)a0;
- (id)firstInvitedContactPlayer;
- (void)setStatus:(long long)a0 forPlayers:(id)a1 complete:(id /* block */)a2;
- (void)addPlayers:(id)a0 withStatus:(long long)a1 replaceAutomatches:(BOOL)a2 complete:(id /* block */)a3;
- (id)currentPlayers;
- (void)failedToInvitePlayers;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })playerRange;
- (void)removePlayers:(id)a0 complete:(id /* block */)a1;
- (id)currentRemotePlayers;
- (id)readyPlayers;
- (void)setParticipantsWithPlayers:(id)a0 automatchPlayerCount:(long long)a1 andStatuses:(id)a2 complete:(id /* block */)a3;
- (long long)maxAvailablePlayers;
- (void)revertFailedPlayers;
- (id)playersToBeInvited;
- (void)didChangeMode;
- (id)playersWithStatus:(long long)a0;
- (void)refreshStatusForParticipant:(id)a0;
- (void)updateParticipants;
- (void)updateDataStructuresForRemovedPlayer:(id)a0;
- (BOOL)shouldUpdateStatus:(long long)a0 withNewStatus:(long long)a1;
- (void)refreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1 updateNotifier:(id)a2;
- (void)addPlayers:(id)a0 withStatus:(long long)a1 complete:(id /* block */)a2;
- (void)configureCollectionView:(id)a0;
- (BOOL)shouldRevertStatus:(long long)a0;
- (void)refreshParticipantsStatuses;
- (void)restoreOrderOfPlayers;
- (id)participantForPlayer:(id)a0;
- (id)participantForAutoMatchNumber:(long long)a0;
- (id)currentPlayersNotInvitedViaMessages;

@end
