@class NSArray;

@interface EDInteractionEventLogMultiplexer : NSObject <EDInteractionEventLog>

@property (retain, nonatomic) NSArray *logs;

- (void).cxx_destruct;
- (id)description;
- (id)initWithLogs:(id)a0;
- (void)persistEvent:(id)a0 date:(id)a1 message:(id)a2 data:(id)a3;
- (void)persistEvent:(id)a0 date:(id)a1 conversationID:(long long)a2 data:(id)a3;
- (void)persistEvent:(id)a0 dataFromMessage:(id)a1;
- (void)persistEvent:(id)a0 dataFromMessage:(id)a1 account:(id)a2;
- (void)persistEvent:(id)a0 date:(id)a1 message:(id)a2 mailbox:(id)a3;
- (void)persistEvent:(id)a0 date:(id)a1 message:(id)a2 mailboxType:(long long)a3;

@end
