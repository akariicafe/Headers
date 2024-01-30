@class CSVoiceTriggerRTModel;

@interface UARPHeySiriModel : NSObject {
    CSVoiceTriggerRTModel *_newModel;
    CSVoiceTriggerRTModel *_fallbackModel;
}

- (void).cxx_destruct;
- (id)expandToPayload:(id)a0 error:(id *)a1;
- (id)initWithHeySiriModel:(id)a0 fallbackModel:(id)a1;
- (id)expandToSuperBinary:(id *)a0;

@end
