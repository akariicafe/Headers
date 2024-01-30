@class SIRINLUEXTERNALCDMNluRequest, SIRINLURequest;

@interface CDMNLXRequest : NSObject

@property (retain) SIRINLURequest *siriNLUObj;
@property (retain) SIRINLUEXTERNALCDMNluRequest *siriNLUTypeObj;

- (void).cxx_destruct;
- (id)initWithSiriNLUObj:(id)a0;
- (id)initWithSiriNLUTypeObj:(id)a0;
- (id)initWithSiriNLUObj:(id)a0 siriNLUTypeObj:(id)a1;

@end
