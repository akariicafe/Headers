@class SIRINLUEXTERNALCDMNluRequest, SIRINLUEXTERNALCDMNluResponse;

@interface LRRCDMReplayRequestResult : NSObject

@property (readonly, nonatomic) SIRINLUEXTERNALCDMNluRequest *request;
@property (readonly, nonatomic) SIRINLUEXTERNALCDMNluResponse *responseReplay;

- (void).cxx_destruct;
- (id)initWithReplayResult:(id)a0 responseReplay:(id)a1;

@end
