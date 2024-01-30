@class NSString;

@interface VNMTLDeviceWisdomParameters : NSObject <VNMTLDeviceWisdomParametersProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_wisdomResourcesPath;
- (id)wisdomParameterForMTLDevice:(id)a0 error:(id *)a1;
- (id)_cachedMetalDeviceWisdomParametersAndReturnError:(id *)a0;
- (id)wisdomParameterForMTLDeviceWithName:(id)a0 error:(id *)a1;
- (void)_flushMetalDeviceWisdomParametersCache;

@end
