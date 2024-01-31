@class NSString;

@interface DSP_HostCallbacks : NSObject <HAL_DSP_HostCallbacks>

@property (nonatomic) struct function<void (const DSP_Host_Types::MutationRequestConfiguration &)> { struct __value_func<void (const DSP_Host_Types::MutationRequestConfiguration &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } mutationRequestListener;
@property (nonatomic) struct function<void (const AudioObjectPropertyAddress &)> { struct __value_func<void (const AudioObjectPropertyAddress &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } propertyChangeListener;
@property (nonatomic) struct DSP_Host_IOProcessor { void /* function */ **x0; } *owner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
