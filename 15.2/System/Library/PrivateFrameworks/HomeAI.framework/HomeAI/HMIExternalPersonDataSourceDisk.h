@class NSString;

@interface HMIExternalPersonDataSourceDisk : HMIPersonDataSourceDisk <HMIExternalPersonManagerDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)fetchSettingsWithCompletion:(id /* block */)a0;
- (void)addPersonFaceCrops:(id)a0 completion:(id /* block */)a1;
- (void)addPerson:(id)a0 completion:(id /* block */)a1;

@end
