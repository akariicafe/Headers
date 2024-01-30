@interface IDSLocalPairingLocalDeviceRecord : IDSLocalPairingRecord <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)description;
- (id)_fullIdenityForDataProtectionClass:(unsigned int)a0 error:(id *)a1;
- (id)fullIdentityClassA:(id *)a0;
- (id)fullIdentityClassC:(id *)a0;
- (id)fullIdentityClassD:(id *)a0;
- (id)initWithWithFullIdentityDataClassA:(id)a0 classC:(id)a1 classD:(id)a2;

@end
