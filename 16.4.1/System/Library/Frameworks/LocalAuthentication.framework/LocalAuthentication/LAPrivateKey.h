@class LAPublicKey, LARight, NSObject;
@protocol LAKeyStoreKey, OS_dispatch_queue;

@interface LAPrivateKey : NSObject {
    LARight *_right;
    id<LAKeyStoreKey> _key;
    NSObject<OS_dispatch_queue> *_workQueue;
    unsigned long long _instanceID;
}

@property (readonly, nonatomic) LAPublicKey *publicKey;

- (id)initWithKey:(id)a0;
- (id)right;
- (id)identifier;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)setRight:(id)a0;
- (BOOL)canDecryptUsingSecKeyAlgorithm:(struct __CFString { } *)a0;
- (BOOL)canExchangeKeysUsingSecKeyAlgorithm:(struct __CFString { } *)a0;
- (BOOL)canSignUsingSecKeyAlgorithm:(struct __CFString { } *)a0;
- (void)decryptData:(id)a0 secKeyAlgorithm:(struct __CFString { } *)a1 completion:(id /* block */)a2;
- (void)exchangeKeysWithPublicKey:(id)a0 secKeyAlgorithm:(struct __CFString { } *)a1 secKeyParameters:(id)a2 completion:(id /* block */)a3;
- (void)signData:(id)a0 secKeyAlgorithm:(struct __CFString { } *)a1 completion:(id /* block */)a2;

@end
