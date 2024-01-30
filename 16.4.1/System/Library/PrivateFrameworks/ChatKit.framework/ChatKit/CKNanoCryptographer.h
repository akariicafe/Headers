@class NSData, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CKNanoCryptographer : NSObject {
    NSData *_deviceSalt;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) NSData *deviceSalt;
@property (copy, nonatomic) NSString *cachedRecipientName;
@property (copy, nonatomic) NSString *cachedRecipientDigest;

+ (id)sharedCryptographer;

- (id)init;
- (id)stringDigestForName:(id)a0;
- (void).cxx_destruct;
- (void)prewarmDeviceSalt;

@end
