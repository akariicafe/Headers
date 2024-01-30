@class NSString;

@interface HMMTRColorControl : MTRBaseClusterColorControl <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)moveToCustomColorTemperatureWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)moveToCustomHueAndSaturationWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)moveToHueAndCustomSaturationWithParams:(id)a0 completionHandler:(id /* block */)a1;

@end
