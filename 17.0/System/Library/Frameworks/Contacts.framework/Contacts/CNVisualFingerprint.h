@class NSArray;

@interface CNVisualFingerprint : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSArray *hashData;

+ (id)archiveWithFingerprint:(id)a0;
+ (id)fingerprintFromArchive:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHashData:(id)a0;
- (id)initWithVNFingerprintHashes:(id)a0;

@end
