@class NSData;

@interface HMCameraClipEncryptionContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSData *key;
@property (readonly) unsigned long long scheme;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithKey:(id)a0 scheme:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
