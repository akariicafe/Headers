@class NSString;

@interface CKVDonateServiceFactory : CKVServiceFactory <CKVDonateServiceProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)donateService;

@end
