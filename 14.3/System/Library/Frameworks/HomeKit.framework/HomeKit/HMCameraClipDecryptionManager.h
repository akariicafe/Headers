@class NSData;

@interface HMCameraClipDecryptionManager : NSObject

@property (readonly, copy) NSData *key;

- (void).cxx_destruct;
- (id)dataFromEncryptedDataContext:(id)a0;
- (id)initWithKey:(id)a0;

@end
