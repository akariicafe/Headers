@class NSData;

@interface BLTMessageDigest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *messageDigest;

- (void)encodeWithCoder:(id)a0;
- (id)initWithMessage:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToMessageDigest:(id)a0;

@end
