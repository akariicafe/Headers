@class NSData;

@interface HMCameraClipDecryptionManager : NSObject

@property (readonly, copy) NSData *key;

- (id)initWithKey:(id)a0;
- (void).cxx_destruct;
- (id)dataFromEncryptedDataContext:(id)a0;

@end
