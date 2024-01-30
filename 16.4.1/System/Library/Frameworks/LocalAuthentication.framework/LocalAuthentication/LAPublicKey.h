@class LARight, NSObject;
@protocol LAKeyStoreKey, OS_dispatch_queue;

@interface LAPublicKey : NSObject {
    LARight *_right;
    id<LAKeyStoreKey> _key;
    NSObject<OS_dispatch_queue> *_workQueue;
    unsigned long long _instanceID;
}

- (id)initWithKey:(id)a0;
- (id)right;
- (id)identifier;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)setRight:(id)a0;
- (BOOL)canEncryptUsingSecKeyAlgorithm:(struct __CFString { } *)a0;
- (BOOL)canVerifyUsingSecKeyAlgorithm:(struct __CFString { } *)a0;
- (void)encryptData:(id)a0 secKeyAlgorithm:(struct __CFString { } *)a1 completion:(id /* block */)a2;
- (void)exportBytesWithCompletion:(id /* block */)a0;
- (void)verifyData:(id)a0 signature:(id)a1 secKeyAlgorithm:(struct __CFString { } *)a2 completion:(id /* block */)a3;

@end
