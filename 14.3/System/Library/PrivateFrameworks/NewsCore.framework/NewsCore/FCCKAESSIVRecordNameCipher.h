@interface FCCKAESSIVRecordNameCipher : NSObject <FCCKRecordNameCipher>

- (id)encryptRecordName:(id)a0 withKey:(id)a1;
- (id)decryptRecordName:(id)a0 withKey:(id)a1;
- (id)_derivedKeyFromKey:(id)a0;
- (id)_encryptionSalt;

@end
