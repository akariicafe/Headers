@class MRCommandResult;

@interface MRSendCommandResultMessage : MRProtocolMessage {
    MRCommandResult *_commandResult;
}

@property (readonly, nonatomic) MRCommandResult *commandResult;

- (id)initWithCommandID:(id)a0 commandResult:(id)a1;
- (unsigned int)sendError;
- (void).cxx_destruct;
- (unsigned long long)type;

@end
