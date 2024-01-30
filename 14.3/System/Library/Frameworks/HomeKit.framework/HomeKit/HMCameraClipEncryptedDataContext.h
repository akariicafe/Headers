@class NSData;

@interface HMCameraClipEncryptedDataContext : NSObject <NSCopying>

@property (readonly, copy) NSData *initializationVector;
@property (readonly, copy) NSData *ciphertext;
@property (readonly, copy) NSData *tag;
@property (readonly, copy) NSData *dataRepresentation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithInitializationVector:(id)a0 ciphertext:(id)a1 tag:(id)a2;
- (id)initWithDataRepresentation:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
