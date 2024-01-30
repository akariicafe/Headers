@class NSData;

@interface HMCameraClipEncryptionManager : NSObject

@property (readonly, copy) NSData *key;

- (id)initWithKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)encryptedDataContextFromData:(id)a0;

@end
