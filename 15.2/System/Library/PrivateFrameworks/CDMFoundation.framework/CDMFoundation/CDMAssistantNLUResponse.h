@class NSString, SIRINLUEXTERNALCDMNluResponse, SIRINLUINTERNALPreprocessingWrapper, SIRINLUResponse;

@interface CDMAssistantNLUResponse : NSObject

@property (readonly, nonatomic) NSString *requestId;
@property (readonly, nonatomic) SIRINLUResponse *nluResponse;
@property (readonly, nonatomic) SIRINLUEXTERNALCDMNluResponse *siriNLUTypeObj;
@property (readonly, nonatomic) SIRINLUINTERNALPreprocessingWrapper *preprocessingWrapper;

- (void).cxx_destruct;
- (id)initWithNLUResponseDeprecated:(id)a0 shouldConvertNLXResponse:(BOOL)a1 requestId:(id)a2;
- (id)initWithNLUResponse:(id)a0 preprocessingWrapper:(id)a1 requestId:(id)a2;
- (id)initWithNLUResponse:(id)a0 requestId:(id)a1;

@end
