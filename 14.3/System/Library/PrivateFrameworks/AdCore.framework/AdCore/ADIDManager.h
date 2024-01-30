@class NSArray, NSDictionary, DSIDRecord;

@interface ADIDManager : ADSingleton <ADIDManager_XPC>

@property (retain) NSArray *monthlyResetArray;
@property (retain, nonatomic) NSDictionary *usageVectors;
@property (retain) DSIDRecord *activeDSIDRecord;
@property (readonly, nonatomic) long long PersonalizedAdsMonthResetCount;

+ (id)sharedInstance;

- (void)forceReconcile:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)loadIDs;
- (void)logIDs:(id)a0;
- (id)deviceIdentifiers;
- (id)reloadRecords:(id)a0;
- (id)loadFakeRecord:(id)a0;
- (id)dsidRecord:(id)a0 fromDict:(id)a1;
- (id)idForClientType:(long long)a0;
- (id)encryptedIDForClientType:(long long)a0;
- (void)reloadRecords:(id)a0 completionHandler:(id /* block */)a1;
- (id)retrieveDeviceIDs;

@end
