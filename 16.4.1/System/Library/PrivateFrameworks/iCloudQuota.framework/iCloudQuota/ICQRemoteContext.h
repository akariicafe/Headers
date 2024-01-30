@class ICQLink, ICQOffer, NSData;

@interface ICQRemoteContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ICQOffer *offer;
@property (readonly, nonatomic) ICQLink *link;
@property (readonly, nonatomic) NSData *flowOptionsData;
@property (readonly, nonatomic) NSData *preloadedRemoteUIData;

+ (id)ICQContextFromRemoteAlertContext:(id)a0;
+ (id)contextFromDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)toDictionary;
- (id)initWithCoder:(id)a0;
- (id)_serializedData;
- (void).cxx_destruct;
- (id)initWithOffer:(id)a0 link:(id)a1 flowOptionsData:(id)a2 preloadedRemoteUIData:(id)a3;

@end
