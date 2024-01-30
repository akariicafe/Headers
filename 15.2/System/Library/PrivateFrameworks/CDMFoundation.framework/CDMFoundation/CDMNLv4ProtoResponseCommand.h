@class SIRINLUINTERNALNLV4_PARSERNLv4ParserResponse, SIRINLUResponse;

@interface CDMNLv4ProtoResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALNLV4_PARSERNLv4ParserResponse *parserResponse;
@property (readonly, nonatomic) SIRINLUResponse *nluResponse;

- (void).cxx_destruct;
- (id)commandName;
- (id)initWithParserResponse:(id)a0 nluResponse:(id)a1;

@end
