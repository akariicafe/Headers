@class NSData;

@interface TVRMSFairPlayKeyboardEncryption : NSObject {
    NSData *_challenge;
    BOOL _certIsTrusted;
    struct __SecKey { } *_pubKeyRef;
}

- (BOOL)isTrusted;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (id)_convertDataToString:(id)a0;
- (id)_convertStringToData:(id)a0;
- (BOOL)_verifyCert:(id)a0;
- (id)encryptString:(id)a0;
- (void)setLeafString:(id)a0;
- (void)setChallengeString:(id)a0;

@end
