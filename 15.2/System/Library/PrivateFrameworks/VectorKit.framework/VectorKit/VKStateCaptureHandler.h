@class NSString;

@interface VKStateCaptureHandler : NSObject {
    NSString *_name;
    unsigned long long _handle;
    struct function<NSString *()> { struct __value_func<NSString *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _callback;
}

+ (struct os_state_data_s { unsigned int x0; union { unsigned int x0 : 32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64]; char x1[64]; } x2; char x3[64]; unsigned char x4[0]; } *)stateDataForDictionary:(id)a0 title:(id)a1;

- (void)_registerHandlerforStateCapture:(id)a0;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 : 32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64]; char x1[64]; } x2; char x3[64]; unsigned char x4[0]; } *)_stateCapture;
- (void)_unregisterHandlerforStateCapture;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 withName:(id)a1 withCallback:(struct function<NSString *()> { struct __value_func<NSString *()> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a2;
- (void)dealloc;
- (id).cxx_construct;

@end
