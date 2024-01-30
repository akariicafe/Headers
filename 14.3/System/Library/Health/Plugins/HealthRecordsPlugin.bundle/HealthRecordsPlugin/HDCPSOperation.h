@class HDProfile, HDClinicalProviderServiceManager;

@interface HDCPSOperation : NSOperation

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, weak, nonatomic) HDClinicalProviderServiceManager *providerServiceManager;

- (id)init;
- (void).cxx_destruct;
- (id)initWithManager:(id)a0 profile:(id)a1;

@end
