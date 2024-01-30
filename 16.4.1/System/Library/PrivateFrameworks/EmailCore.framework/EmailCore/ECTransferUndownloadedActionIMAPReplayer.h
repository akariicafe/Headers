@protocol ECIMAPLocalActionReplayerDelegate, ECIMAPServerInterface;

@interface ECTransferUndownloadedActionIMAPReplayer : ECLocalActionReplayer <ECIMAPLocalActionReplayer>

@property (weak, nonatomic) id<ECIMAPLocalActionReplayerDelegate> delegate;
@property (retain, nonatomic) id<ECIMAPServerInterface> serverInterface;

- (void).cxx_destruct;
- (id)replayAction;
- (id)_copyAllMessages:(BOOL)a0;
- (BOOL)_deleteUIDs:(id)a0;
- (BOOL)_moveAllMessages;
- (id)_uidIndexSet;

@end
