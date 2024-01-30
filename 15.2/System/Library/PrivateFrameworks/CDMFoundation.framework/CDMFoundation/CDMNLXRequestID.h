@class SIRINLUEXTERNALRequestID, SIRINLURequestID;

@interface CDMNLXRequestID : NSObject

@property (retain) SIRINLURequestID *siriNLUObj;
@property (retain) SIRINLUEXTERNALRequestID *siriNLUTypeObj;

- (void).cxx_destruct;
- (id)initWithSiriNLUObj:(id)a0;
- (id)initWithSiriNLUTypeObj:(id)a0;
- (id)initWithSiriNLUObj:(id)a0 siriNLUTypeObj:(id)a1;

@end
