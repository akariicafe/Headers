@class NSMutableSet;
@protocol MSPSenderMessageStrategyDelegate;

@interface MSPSenderMessageStrategy : MSPSenderStrategy

@property (retain, nonatomic) NSMutableSet *messagesParticipants;
@property (weak, nonatomic) id<MSPSenderMessageStrategyDelegate> delegate;

- (id)participants;
- (void)addParticipants:(id)a0;
- (void).cxx_destruct;
- (void)setState:(id)a0;
- (void)removeParticipants:(id)a0;
- (void)_addMessagesParticipants:(id)a0;
- (void)_removeMessagesParticipants:(id)a0;
- (void)sendMessageIfNeeded;

@end
