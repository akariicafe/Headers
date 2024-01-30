@class IDSMPFullLegacyIdentity, NSString, IDSMPFullDeviceIdentity, IDSAccountIdentity;
@protocol ENDevicePublicKey;

@interface IDSDeviceIdentity : NSObject <ENDeviceKey>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) IDSMPFullLegacyIdentity *legacyIdentity;
@property (readonly, nonatomic) IDSMPFullDeviceIdentity *modernIdentity;
@property (readonly, nonatomic) IDSAccountIdentity *accountIdentity;
@property (readonly, nonatomic) id<ENDevicePublicKey> devicePublicKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithLegacyIdentity:(id)a0 modernIdentity:(id)a1 accountIdentity:(id)a2;

@end
