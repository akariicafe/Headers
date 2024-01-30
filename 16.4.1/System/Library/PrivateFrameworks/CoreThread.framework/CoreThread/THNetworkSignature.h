@class NSData, NSString;

@interface THNetworkSignature : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *ipv4NwSignature;
@property (readonly, nonatomic) NSData *ipv6NwSignature;
@property (readonly, nonatomic) NSString *wifiSSID;
@property (readonly, nonatomic) NSString *wifiPassword;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initSignaturesWithArrays:(char *)a0 ipv4BytesLen:(int)a1 ipv6Bytes:(char *)a2 ipv6BytesLen:(int)a3 wifSSID:(id)a4 wifiPassword:(id)a5;
- (id)initWithSignatures:(id)a0 ipv6NwSignature:(id)a1 wifSSID:(id)a2 wifiPassword:(id)a3;

@end
