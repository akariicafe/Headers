@class MRCommandResult;

@interface MRSendCommandResultMessage : MRProtocolMessage {
    MRCommandResult *_commandResult;
}

@property (readonly, nonatomic) MRCommandResult *commandResult;

- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithCommandID:(id)a0 commandResult:(id)a1;
- (unsigned int)sendError;

@end
