@class NSString;

@interface VKStateCaptureHandler : NSObject {
    NSString *_name;
    unsigned long long _handle;
    struct function<NSString *()> { struct __value_func<NSString *()> { struct type { unsigned char __lx[24]; } __buf_; struct __base<NSString *()> *__f_; } __f_; } _callback;
}

+ (struct os_state_data_s { unsigned int x0; union { unsigned int x0 : 32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64]; char x1[64]; } x2; char x3[64]; unsigned char x4[0]; } *)stateDataForDictionary:(id)a0 title:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 : 32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64]; char x1[64]; } x2; char x3[64]; unsigned char x4[0]; } *)_stateCapture;
- (id)initWithQueue:(id)a0 withName:(id)a1 withCallback:(struct function<NSString *()> { struct __value_func<NSString *()> { struct type { unsigned char x0[24]; } x0; struct __base<NSString *()> *x1; } x0; })a2;
- (id).cxx_construct;
- (void)_unregisterHandlerforStateCapture;
- (void)_registerHandlerforStateCapture:(id)a0;

@end
