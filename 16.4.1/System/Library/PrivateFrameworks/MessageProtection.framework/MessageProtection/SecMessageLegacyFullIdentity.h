@class LegacySigningKeyPrivate, SecKeyRSAPrivate, NSData;

@interface SecMessageLegacyFullIdentity : NSObject

@property (retain, nonatomic) LegacySigningKeyPrivate *signingKey;
@property (retain, nonatomic) SecKeyRSAPrivate *encryptionKey;
@property (retain, nonatomic) NSData *encryptionKeyPersistentRef;
@property (retain, nonatomic) NSData *signingKeyPersistentRef;
@property (nonatomic) BOOL isMigratedV2Key;

+ (id)identity;
+ (id)identityWithDataRepresentation:(id)a0 error:(id *)a1;
+ (id)identityFromV2Bytes:(const char **)a0 size:(unsigned long long *)a1 error:(id *)a2;
+ (id)populateIdentity:(id)a0 withEncryptionKeyFromPersistentRef:(const char **)a1 size:(unsigned long long *)a2;
+ (id)populateIdentity:(id)a0 withSigningKeyFromPersistentRef:(const char **)a1 size:(unsigned long long *)a2;

- (id)signData:(id)a0 error:(id *)a1;
- (id)initWithEncryptionSecKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 signingSecKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1;
- (void)deleteMigratedKeys;
- (id)dataRepresentationWithError:(id *)a0;
- (struct _SecMPFullIdentity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKey *x1; struct __SecKey *x2; struct __SecKey *x3; struct __SecKey *x4; id x5; } *)asRef;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)privateSigningKeyForTerminusMigration;
- (id)initWithProtobufData:(id)a0;
- (id)initWithEncryptionKey:(id)a0 signingKey:(id)a1;
- (unsigned long long)encryptionSize;
- (id)unsealMessage:(id)a0 signedByPublicIdentity:(id)a1 error:(id *)a2;
- (void)deleteItemWithPersistentRef:(id)a0;
- (id)initWithEncryptionKeyData:(id)a0 signingKeyData:(id)a1;
- (id)decryptMessage:(id)a0 error:(id *)a1;
- (id)publicIdentity;
- (void).cxx_destruct;

@end
