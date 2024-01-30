@class NSString;
@protocol HAL_DSP_HostCallbacks;

@interface DSP_HALBypass_IOProcessor : NSObject <HAL_DSP_IOProcessor>

@property (nonatomic) void *dspCallbacks;
@property (retain, nonatomic) id<HAL_DSP_HostCallbacks> hostCallbacks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)adaptToConfigurationChange:(id)a0 withCallbacks:(void *)a1 error:(id *)a2;
- (id)getCustomProperty:(struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; })a0;
- (id)getCustomPropertyList;
- (BOOL)hasCustomProperty:(struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; })a0;
- (id)negotiateConfigurationChange:(id)a0 error:(id *)a1;
- (id)retrieveFormats:(id)a0 error:(id *)a1;
- (BOOL)setCustomProperty:(struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; })a0 withData:(id)a1 error:(id *)a2;

@end
