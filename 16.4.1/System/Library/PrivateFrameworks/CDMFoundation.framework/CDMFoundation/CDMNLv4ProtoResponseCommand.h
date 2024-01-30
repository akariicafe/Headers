@class SIRINLUEXTERNALCDMNluResponse, SIRINLUINTERNALNLV4_PARSERNLv4ParserResponse;

@interface CDMNLv4ProtoResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALNLV4_PARSERNLv4ParserResponse *parserResponse;
@property (readonly, nonatomic) SIRINLUEXTERNALCDMNluResponse *nluResponse;

- (void).cxx_destruct;
- (id)initWithParserResponse:(id)a0 nluResponse:(id)a1;

@end
