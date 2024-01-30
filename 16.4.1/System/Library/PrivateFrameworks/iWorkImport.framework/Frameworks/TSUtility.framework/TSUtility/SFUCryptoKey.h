@class NSString, NSData;

@interface SFUCryptoKey : NSObject {
    unsigned int mIterationCount;
    char *mKey;
    unsigned long long mKeyLength;
    NSData *mSaltData;
}

@property (readonly, nonatomic) NSString *passphrase;

- (const char *)keyData;
- (int)keyType;
- (void)dealloc;
- (unsigned int)iterationCount;
- (id)saltData;
- (id)initAes128Key:(const char *)a0 length:(unsigned int)a1 iterationCount:(unsigned int)a2;
- (id)initAes128KeyFromPassphrase:(id)a0 iterationCount:(unsigned int)a1;
- (id)initAes128KeyFromPassphrase:(id)a0 iterationCount:(unsigned int)a1 saltData:(id)a2;
- (id)initAes128KeyFromPassphrase:(const char *)a0 length:(unsigned int)a1 iterationCount:(unsigned int)a2;
- (id)initAes128KeyFromPassphrase:(const char *)a0 length:(unsigned int)a1 iterationCount:(unsigned int)a2 saltData:(id)a3;
- (id)initAes128KeyFromPassphrase:(id)a0 withIterationCountAndSaltDataFromCryptoKey:(id)a1;
- (unsigned long long)keyLength;

@end
