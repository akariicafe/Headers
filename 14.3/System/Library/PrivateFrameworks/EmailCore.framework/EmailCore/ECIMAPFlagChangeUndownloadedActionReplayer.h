@protocol ECIMAPLocalActionReplayerDelegate, ECIMAPServerInterface;

@interface ECIMAPFlagChangeUndownloadedActionReplayer : ECLocalActionReplayer <ECIMAPLocalActionReplayer>

@property (weak, nonatomic) id<ECIMAPLocalActionReplayerDelegate> delegate;
@property (retain, nonatomic) id<ECIMAPServerInterface> serverInterface;

- (void).cxx_destruct;
- (id)replayAction;

@end
