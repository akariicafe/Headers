@class NSMutableDictionary;

@interface CKDDiscoverAllUserIdentitiesOperation : CKDDiscoverUserIdentitiesOperation

@property (retain, nonatomic) NSMutableDictionary *contactIdentifiersByLookupInfo;

- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (void)_handleDiscoveredIdentity:(id)a0 lookupInfo:(id)a1 responseCode:(id)a2;
- (void)_discoverIdentitiesBatched:(id)a0;
- (void)_populateFakeUnitTestLookupInfosForEnvironment:(long long)a0;
- (void)_populateFakeUnitTestLookupInfos;
- (void)_populateRealUserIdentityLookupInfos;
- (void)_populateUserIdentityLookupInfos;

@end
