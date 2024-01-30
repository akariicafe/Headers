@class NSString;

@interface DSP_HALBypass_Factory : NSObject <HAL_DSP_Factory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createProcessor:(id)a0 withHost:(id)a1;

@end
