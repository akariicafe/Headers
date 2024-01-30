@class SIRINLUINTERNALNLV4_PARSERNLv4ParserRequest, SIRINLURequestID;

@interface CDMNLv4ProtoRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALNLV4_PARSERNLv4ParserRequest *parserRequest;
@property (readonly, nonatomic) SIRINLURequestID *requestId;

- (void).cxx_destruct;
- (id)commandName;
- (id)initWithParserRequest:(id)a0 requestId:(id)a1;

@end
