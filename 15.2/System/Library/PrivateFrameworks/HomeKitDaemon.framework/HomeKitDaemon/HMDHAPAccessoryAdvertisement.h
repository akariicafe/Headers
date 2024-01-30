@class NSData;

@interface HMDHAPAccessoryAdvertisement : HMDAccessoryAdvertisement

@property (readonly, nonatomic) BOOL pairingPresent;
@property (retain, nonatomic) NSData *setupHash;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)a0 name:(id)a1 categoryIdentifier:(id)a2 pairingPresent:(BOOL)a3 setupHash:(id)a4;

@end
