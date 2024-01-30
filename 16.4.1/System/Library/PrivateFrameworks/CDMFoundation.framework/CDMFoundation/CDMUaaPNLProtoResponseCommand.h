@class SIRINLUEXTERNALCDMNluResponse, SIRINLUINTERNALUAAP_PARSERUaaPParserResponse;

@interface CDMUaaPNLProtoResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALUAAP_PARSERUaaPParserResponse *parserResponse;
@property (readonly, nonatomic) SIRINLUEXTERNALCDMNluResponse *nluResponse;

- (void).cxx_destruct;
- (id)initWithParserResponse:(id)a0 nluResponse:(id)a1;

@end
