@class NSData, NSString, NSMutableDictionary;

@interface AKMasterToken : AKToken {
    NSMutableDictionary *_properties;
}

@property (readonly, nonatomic) NSData *sessionKey;
@property (readonly, nonatomic) NSData *encryptedSessionKey;
@property (readonly, nonatomic) NSData *externalizedVersion;
@property (readonly, nonatomic) NSString *externalizedVersionString;

+ (id)tokenWithExternalizedVersion:(id)a0 lifetime:(id)a1;
+ (id)tokenWithExternalizedVersionString:(id)a0;

- (void)_setSessionKey:(id)a0;
- (void)_setEncryptedSessionKey:(id)a0;
- (id)initWithAppleID:(id)a0 altDSID:(id)a1;
- (BOOL)updateWithHTTPURLResponse:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setStringValue:(id)a0;
- (id)stringValue;

@end
