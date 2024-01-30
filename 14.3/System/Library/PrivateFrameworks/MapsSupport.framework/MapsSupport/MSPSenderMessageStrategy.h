@class NSMutableSet;
@protocol MSPSenderMessageStrategyDelegate;

@interface MSPSenderMessageStrategy : MSPSenderStrategy

@property (retain, nonatomic) NSMutableSet *messagesParticipants;
@property (weak, nonatomic) id<MSPSenderMessageStrategyDelegate> delegate;

- (void).cxx_destruct;
- (id)participants;
- (void)addParticipants:(id)a0;
- (void)setState:(id)a0;
- (void)removeParticipants:(id)a0;
- (void)sendMessageIfNeeded;
- (void)_addMessagesParticipants:(id)a0;
- (void)_removeMessagesParticipants:(id)a0;

@end
