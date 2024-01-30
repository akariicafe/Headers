@class NSData, ICQOffer;

@interface ICQRemoteContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ICQOffer *offer;
@property (readonly, nonatomic) NSData *flowOptionsData;

+ (id)ICQContextFromRemoteAlertContext:(id)a0;

- (id)toDictionary;
- (void).cxx_destruct;
- (id)_serializedData;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithOffer:(id)a0 flowOptionsData:(id)a1;

@end
