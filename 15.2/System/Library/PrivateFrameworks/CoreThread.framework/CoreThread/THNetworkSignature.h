@class NSData;

@interface THNetworkSignature : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *ipv4NwSignature;
@property (readonly, nonatomic) NSData *ipv6NwSignature;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSignatures:(id)a0 ipv6NwSignature:(id)a1;
- (id)initSignaturesWithArrays:(char *)a0 ipv4BytesLen:(int)a1 ipv6Bytes:(char *)a2 ipv6BytesLen:(int)a3;

@end
