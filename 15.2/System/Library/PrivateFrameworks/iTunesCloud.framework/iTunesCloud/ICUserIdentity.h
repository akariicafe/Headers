@class NSString, NSNumber;

@interface ICUserIdentity : NSObject <_MSVAccountInformationProviding, NSCopying, NSSecureCoding> {
    NSString *_deviceIdentifier;
    BOOL _isEncodingUsingSpecificIdentityStore;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *accountDSID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long creationTime;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, copy, nonatomic) NSNumber *DSID;
@property (readonly, nonatomic) BOOL allowsDelegation;
@property (readonly, nonatomic) BOOL allowsAccountEstablishment;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) unsigned long long hash;

+ (id)activeLockerAccount;
+ (id)autoupdatingActiveAccount;
+ (id)specificAccountWithDSID:(id)a0;
+ (id)nullIdentity;
+ (id)autoupdatingActiveLockerAccount;
+ (id)carrierBundleWithDeviceIdentifier:(id)a0;
+ (id)activeAccount;

- (void)_ensureResolvedDSIDUsingSpecificIdentityStore:(id)a0;
- (BOOL)isEqualToIdentity:(id)a0 inStore:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)identityAllowingDelegation:(BOOL)a0;
- (BOOL)_isComparableUsingResolvedDSID;
- (unsigned long long)hashInStore:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)identityAllowingEstablishment:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_performEncodingTaskUsingSpecificIdentityStore:(id)a0 encodingHandler:(id /* block */)a1;
- (void)_setResolvedDSID:(id)a0;
- (id)_resolvedDSIDUsingSpecificIdentityStore:(id)a0;

@end
