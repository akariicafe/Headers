@class NSArray;

@interface MRSendCommandResultMessage : MRProtocolMessage {
    NSArray *_results;
}

@property (readonly, nonatomic) unsigned int sendError;
@property (readonly, nonatomic) NSArray *results;

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithCommandID:(id)a0 sendError:(unsigned int)a1 results:(id)a2;

@end
