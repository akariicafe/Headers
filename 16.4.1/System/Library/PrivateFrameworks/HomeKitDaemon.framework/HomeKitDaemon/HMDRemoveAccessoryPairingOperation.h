@class NSString;

@interface HMDRemoveAccessoryPairingOperation : HMDAccessoryBackgroundOperation <HMFLogging>

@property (readonly, nonatomic) NSString *pairingIdentifierToRemove;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)predicate;

- (id)logIdentifier;
- (id)initWithAccessory:(id)a0 accessoryIdentifier:(id)a1 homeUUIDWhereAccessoryWasPaired:(id)a2 isOwnerIdentity:(BOOL)a3 identityToRemove:(id)a4 userData:(id)a5;
- (id)initWithAccessory:(id)a0 isOwnerIdentity:(BOOL)a1 identityToRemove:(id)a2;
- (id)initWithAccessory:(id)a0 isOwnerIdentity:(BOOL)a1 identityToRemove:(id)a2 userData:(id)a3;
- (BOOL)mainWithError:(id *)a0;

@end
