@class NSMutableDictionary;

@interface CKDDiscoverAllUserIdentitiesOperation : CKDDiscoverUserIdentitiesOperation

@property (retain, nonatomic) NSMutableDictionary *contactIdentifiersByLookupInfo;

- (id)initWithOperationInfo:(id)a0 clientContext:(id)a1;
- (void).cxx_destruct;
- (void)main;
- (void)_handleDiscoveredIdentity:(id)a0 lookupInfo:(id)a1 responseCode:(id)a2;
- (void)_discoverIdentitiesBatched:(id)a0;

@end
