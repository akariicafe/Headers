@class NSArray, SIRINLUINTERNALSNLCSNLCParserResponse;

@interface CDMSNLCProtoResponseCommand : CDMBaseCommand

@property int classLabel;
@property (readonly, nonatomic) NSArray *snlcParses;
@property (readonly, nonatomic) SIRINLUINTERNALSNLCSNLCParserResponse *snlcResponse;

- (void).cxx_destruct;
- (id)initWithClassLabel:(int)a0 snlcParses:(id)a1 snlcResponse:(id)a2;

@end
