@class NSData;

@interface HMCameraClipEncryptionManager : NSObject

@property (readonly, copy) NSData *key;

- (id)initWithKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)encryptedDataContextFromData:(id)a0;

@end
