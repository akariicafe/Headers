@class NSString;

@interface DSP_HALMock_Factory : NSObject <HAL_DSP_Factory>

@property (nonatomic) int featureFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createProcessor:(id)a0 withHost:(id)a1;

@end
