@class NSData, _TtC17CoreIDCredBuilder28CIDCInternalSessionCryptarch;

@interface CIDCSessionCryptarch : NSObject

@property (retain) _TtC17CoreIDCredBuilder28CIDCInternalSessionCryptarch *internalCryptarch;
@property (readonly) NSData *publicKey;

- (id)encryptData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)decryptData:(id)a0 error:(id *)a1;
- (id)initWithRole:(unsigned long long)a0 curve:(unsigned long long)a1 variant:(unsigned long long)a2;
- (BOOL)setRemoteKey:(id)a0 error:(id *)a1;
- (id)initWithRole:(unsigned long long)a0 curve:(unsigned long long)a1;
- (BOOL)deriveSessionKeysFromSessionTranscript:(id)a0 error:(id *)a1;
- (BOOL)deriveSessionKeysFromSessionTranscript:(id)a0 intermediateKeyMaterial:(id)a1 error:(id *)a2;

@end
