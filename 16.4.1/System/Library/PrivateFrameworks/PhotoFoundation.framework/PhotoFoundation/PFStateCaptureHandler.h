@class NSString, NSObject;
@protocol PFStateCaptureProvider, OS_dispatch_queue;

@interface PFStateCaptureHandler : NSObject {
    id<PFStateCaptureProvider> _provider;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _stateHandle;
    unsigned long long _callCount;
    unsigned long long _ignoreCount;
    NSString *_logPrefix;
}

- (void)dealloc;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 : 32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64]; char x1[64]; } x2; char x3[64]; unsigned char x4[0]; } *)stateDataWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (void).cxx_destruct;
- (id)initWithProvider:(id)a0 name:(id)a1;

@end
