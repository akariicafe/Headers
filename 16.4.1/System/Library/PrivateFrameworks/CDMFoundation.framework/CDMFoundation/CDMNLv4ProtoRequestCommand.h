@class SIRINLUEXTERNALRequestID, SIRINLUINTERNALNLV4_PARSERNLv4ParserRequest;

@interface CDMNLv4ProtoRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALNLV4_PARSERNLv4ParserRequest *parserRequest;
@property (readonly, nonatomic) SIRINLUEXTERNALRequestID *requestId;

- (void).cxx_destruct;
- (id)initWithParserRequest:(id)a0 requestId:(id)a1;

@end
