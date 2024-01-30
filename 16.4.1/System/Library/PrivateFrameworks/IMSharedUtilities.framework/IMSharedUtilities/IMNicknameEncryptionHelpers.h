@interface IMNicknameEncryptionHelpers : NSObject

+ (id)_decryptAndVerifyCipherFields:(id)a0 withPreKey:(id)a1 recordTagToVerify:(id)a2 error:(id *)a3;
+ (id)_decryptCipherField:(id)a0 withFieldEncryptionKey:(id)a1 fieldTaggingKey:(id)a2 error:(id *)a3;
+ (id)_decryptCipherFields:(id)a0 withFieldEncryptionKey:(id)a1 fieldTaggingKey:(id)a2 error:(id *)a3;
+ (id)_encryptAndTagPlainFields:(id)a0 withPreKey:(id)a1 returningRecordTag:(id *)a2 error:(id *)a3;
+ (id)_encryptPlainField:(id)a0 withFieldEncryptionKey:(id)a1 fieldTaggingKey:(id)a2 error:(id *)a3;
+ (id)_encryptPlainFields:(id)a0 withFieldEncryptionKey:(id)a1 fieldTaggingKey:(id)a2 error:(id *)a3;
+ (id)_fieldTagForFieldName:(id)a0 cipherData:(id)a1 IV:(id)a2 fieldTaggingKey:(id)a3 error:(id *)a4;
+ (id)_hmacForData:(id)a0 key:(id)a1;
+ (id)_performOperation:(unsigned int)a0 onData:(id)a1 withFieldEncryptionKey:(id)a2 iv:(id)a3 error:(id *)a4;
+ (id)_randomBytesWithLength:(unsigned long long)a0 error:(id *)a1;
+ (id)_recordTagForCipherFields:(id)a0 recordTaggingKey:(id)a1 error:(id *)a2;
+ (id)_tagForData:(id)a0 key:(id)a1 error:(id *)a2;
+ (id)decryptAndVerifyCipherFields:(id)a0 withPreKey:(id)a1 recordTagToVerify:(id)a2 error:(id *)a3;
+ (id)encryptAndTagPlainFields:(id)a0 withPreKey:(id)a1 returningRecordTag:(id *)a2 error:(id *)a3;

@end
