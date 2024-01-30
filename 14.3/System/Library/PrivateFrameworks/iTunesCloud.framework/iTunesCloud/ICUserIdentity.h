@class NSString, NSNumber;

@interface ICUserIdentity : NSObject <ML3AccountInformationProviding, NSCopying, NSSecureCoding> {
    NSString *_deviceIdentifier;
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
@property (readonly) unsigned long long hash;

+ (id)carrierBundleWithDeviceIdentifier:(id)a0;
+ (id)nullIdentity;
+ (id)activeLockerAccount;
+ (id)activeAccount;
+ (id)autoupdatingActiveAccount;
+ (id)autoupdatingActiveLockerAccount;
+ (id)specificAccountWithDSID:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToIdentity:(id)a0 inStore:(id)a1;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hashInStore:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isComparableUsingResolvedDSID;
- (id)_resolvedDSIDUsingSpecificIdentityStore:(id)a0;
- (void)_ensureResolvedDSIDUsingSpecificIdentityStore:(id)a0;
- (void)_setResolvedDSID:(id)a0;
- (id)identityAllowingDelegation:(BOOL)a0;
- (id)identityAllowingEstablishment:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;

@end
