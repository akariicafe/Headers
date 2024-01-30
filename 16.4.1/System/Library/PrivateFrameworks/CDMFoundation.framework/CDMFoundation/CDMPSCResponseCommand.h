@class NSArray, SIRINLUINTERNALITFMITFMParserResponse;

@interface CDMPSCResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) NSArray *pscParses;
@property (readonly, nonatomic) SIRINLUINTERNALITFMITFMParserResponse *pscResponse;

- (void).cxx_destruct;
- (id)initWithPscParses:(id)a0 pscResponse:(id)a1;

@end
