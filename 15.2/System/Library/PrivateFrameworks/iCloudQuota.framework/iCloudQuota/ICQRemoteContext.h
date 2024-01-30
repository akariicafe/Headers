@class NSData, ICQOffer;

@interface ICQRemoteContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ICQOffer *offer;
@property (readonly, nonatomic) NSData *flowOptionsData;
@property (readonly, nonatomic) NSData *preloadedRemoteUIData;

+ (id)ICQContextFromRemoteAlertContext:(id)a0;

- (id)toDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)_serializedData;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithOffer:(id)a0 flowOptionsData:(id)a1 preloadedRemoteUIData:(id)a2;

@end
