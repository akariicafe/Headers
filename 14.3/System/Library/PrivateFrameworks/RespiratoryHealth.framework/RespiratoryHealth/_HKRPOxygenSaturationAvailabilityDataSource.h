@class NSString, NRDevice;

@interface _HKRPOxygenSaturationAvailabilityDataSource : NSObject <HKRPOxygenSaturationAvailabilityDataSource> {
    NRDevice *_device;
}

@property (readonly, nonatomic) BOOL skipHardwareCheck;
@property (readonly, nonatomic) BOOL deviceIsSupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;

@end
