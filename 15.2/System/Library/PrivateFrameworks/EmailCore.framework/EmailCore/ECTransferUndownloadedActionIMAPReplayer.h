@protocol ECIMAPLocalActionReplayerDelegate, ECIMAPServerInterface;

@interface ECTransferUndownloadedActionIMAPReplayer : ECLocalActionReplayer <ECIMAPLocalActionReplayer>

@property (weak, nonatomic) id<ECIMAPLocalActionReplayerDelegate> delegate;
@property (retain, nonatomic) id<ECIMAPServerInterface> serverInterface;

- (void).cxx_destruct;
- (id)replayAction;
- (BOOL)_moveAllMessages;
- (BOOL)_deleteUIDs:(id)a0;
- (id)_uidIndexSet;
- (id)_copyAllMessages:(BOOL)a0;

@end
