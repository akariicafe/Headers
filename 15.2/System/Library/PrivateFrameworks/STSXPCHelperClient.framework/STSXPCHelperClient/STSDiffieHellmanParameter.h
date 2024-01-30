@class NSData;

@interface STSDiffieHellmanParameter : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long publicKeyGroup;
@property (retain, nonatomic) NSData *publicKey;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)asData;
- (id)initWithKeyGroup:(unsigned long long)a0 key:(id)a1;

@end
