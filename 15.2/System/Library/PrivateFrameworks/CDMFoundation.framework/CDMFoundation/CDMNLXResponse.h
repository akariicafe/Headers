@class SIRINLUEXTERNALCDMNluResponse, SIRINLUResponse;

@interface CDMNLXResponse : NSObject

@property (retain) SIRINLUResponse *siriNLUObj;
@property (retain) SIRINLUEXTERNALCDMNluResponse *siriNLUTypeObj;

- (void).cxx_destruct;
- (id)initWithSiriNLUObj:(id)a0;
- (id)initWithSiriNLUTypeObj:(id)a0;
- (id)initWithSiriNLUObj:(id)a0 siriNLUTypeObj:(id)a1;

@end
