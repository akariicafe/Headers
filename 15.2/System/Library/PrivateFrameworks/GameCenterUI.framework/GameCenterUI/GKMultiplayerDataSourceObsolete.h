@class NSArray, NSMutableDictionary, NSMutableOrderedSet;
@protocol GKMultiplayerDataSourceDelegateObsolete;

@interface GKMultiplayerDataSourceObsolete : GKBasicCollectionViewDataSource

@property (retain, nonatomic) NSMutableDictionary *playerStatus;
@property (retain, nonatomic) NSMutableOrderedSet *players;
@property (retain, nonatomic) NSMutableOrderedSet *orderedPlayerIDList;
@property (weak, nonatomic) id<GKMultiplayerDataSourceDelegateObsolete> delegate;
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
- (void)didChangeMode;
- (void).cxx_destruct;
- (id)init;
- (void)configureCollectionView:(id)a0;
- (void)addPlayers:(id)a0 withStatus:(long long)a1 replaceAutomatches:(BOOL)a2 complete:(id /* block */)a3;
- (void)setAutomatchPlayerCount:(long long)a0 complete:(id /* block */)a1;
- (void)removePlayers:(id)a0 complete:(id /* block */)a1;
- (long long)maxAvailablePlayers;
- (id)currentPlayers;
- (void)revertFailedPlayers;
- (id)playersToBeInvited;
- (void)setStatus:(long long)a0 forPlayers:(id)a1 complete:(id /* block */)a2;
- (void)refreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1 updateNotifier:(id)a2;
- (long long)statusForPlayer:(id)a0;
- (id)playersWithStatus:(long long)a0;
- (void)refreshStatusForParticipant:(id)a0;
- (void)updateParticipants;
- (void)reportMultiplayerSelection:(id)a0;
- (void)updateDataStructuresForRemovedPlayer:(id)a0;
- (BOOL)shouldUpdateStatus:(long long)a0 withNewStatus:(long long)a1;
- (BOOL)shouldRevertStatus:(long long)a0;
- (void)addPlayers:(id)a0 withStatus:(long long)a1 complete:(id /* block */)a2;
- (id)readyPlayers;
- (void)refreshParticipantsStatuses;
- (void)restoreOrderOfPlayers;
- (id)participantForPlayer:(id)a0;
- (id)participantForAutoMatchNumber:(long long)a0;
- (id)currentPlayersNotInvitedViaMessages;
- (id)currentRemotePlayers;
- (id)guestPlayers;
- (id)playersInvited;
- (BOOL)havePendingPlayers;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })playerRange;
- (id)firstInvitedContactPlayer;
- (void)setParticipantsWithPlayers:(id)a0 automatchPlayerCount:(long long)a1 andStatuses:(id)a2 complete:(id /* block */)a3;
- (void)failedToInvitePlayers;
- (void)replaceContactPlayers:(id)a0 withNormalPlayers:(id)a1 complete:(id /* block */)a2;

@end
