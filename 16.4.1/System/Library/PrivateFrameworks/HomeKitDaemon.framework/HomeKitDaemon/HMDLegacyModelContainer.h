@class HMFPairingIdentity;

@interface HMDLegacyModelContainer : HMBModelContainer

@property (readonly, nonatomic) HMFPairingIdentity *pairingIdentity;

- (id)encodePropertyValue:(id)a0 forProperty:(id)a1 field:(id)a2 storageLocation:(unsigned long long)a3 error:(id *)a4;
- (id)initWithDataVersion:(id)a0 legacyDataVersion:(id)a1 pairingIdentity:(id)a2;
- (id)decodePropertyValueFromData:(id)a0 forProperty:(id)a1 field:(id)a2 storageLocation:(unsigned long long)a3 error:(id *)a4;
- (id)modelFromData:(id)a0 encoding:(unsigned long long)a1 storageLocation:(unsigned long long)a2 type:(id)a3 error:(id *)a4;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)encryptData:(id)a0 compress:(BOOL)a1 error:(id *)a2;
- (id)decryptData:(id)a0 decompress:(BOOL)a1 error:(id *)a2;
- (Class)modelClassForTypeName:(id)a0;
- (void).cxx_destruct;

@end
