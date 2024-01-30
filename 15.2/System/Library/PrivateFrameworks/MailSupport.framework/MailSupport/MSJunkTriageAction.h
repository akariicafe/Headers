@interface MSJunkTriageAction : MSMoveTriageAction

@property (readonly, nonatomic) BOOL hasNonJunkMessages;

+ (BOOL)hasNonJunkMessagesInSelection:(id)a0;

- (id)initWithMessageListSelection:(id)a0 delegate:(id)a1;

@end
