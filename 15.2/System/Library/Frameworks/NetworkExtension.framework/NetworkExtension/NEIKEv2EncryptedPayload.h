@class NSData;

@interface NEIKEv2EncryptedPayload : NEIKEv2Payload

@property (retain) NSData *encryptedData;

+ (id)copyTypeDescription;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData;
- (unsigned long long)type;
- (id)copyDecryptedPayloadsForEncryption:(id)a0 integrity:(id)a1 encryptionKey:(id)a2 integrityKey:(id)a3 packetData:(id)a4;
- (BOOL)encryptPayloads:(id)a0 encryption:(id)a1 integrity:(id)a2 encryptionKey:(id)a3 integrityKey:(id)a4 aad:(id)a5 encryptionContext:(id)a6;

@end
