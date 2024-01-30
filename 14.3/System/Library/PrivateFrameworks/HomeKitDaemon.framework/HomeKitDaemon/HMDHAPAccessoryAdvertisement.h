@class NSData;

@interface HMDHAPAccessoryAdvertisement : HMDAccessoryAdvertisement

@property (readonly, nonatomic) BOOL pairingPresent;
@property (retain, nonatomic) NSData *setupHash;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 categoryIdentifier:(id)a2 pairingPresent:(BOOL)a3 setupHash:(id)a4;

@end
