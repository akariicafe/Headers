@class NSString;

@interface ARSessionFrameObserver : NSObject <ARInternalSessionObserver> {
    struct function<void (rf::data_flow::provider::InputFrame &&)> { struct __value_func<void (rf::data_flow::provider::InputFrame &&)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _callback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCallback:(struct function<void (rf::data_flow::provider::InputFrame &&)> { struct __value_func<void (rf::data_flow::provider::InputFrame &&)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a0;
- (id)initWithCallback:(struct function<void (rf::data_flow::provider::InputFrame &&)> { struct __value_func<void (rf::data_flow::provider::InputFrame &&)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a0;
- (id).cxx_construct;
- (void)session:(id)a0 didUpdateFrame:(id)a1;
- (void).cxx_destruct;

@end
