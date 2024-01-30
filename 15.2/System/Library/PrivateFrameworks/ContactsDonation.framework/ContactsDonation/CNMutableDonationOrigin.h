@class NSString, NSDate;

@interface CNMutableDonationOrigin : CNDonationOrigin

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *donationIdentifier;
@property (copy, nonatomic) NSString *clusterIdentifier;
@property (copy, nonatomic) NSDate *donationDate;
@property (copy, nonatomic) NSDate *expirationDate;

+ (id)new;

- (void)setClusterIdentifier:(id)a0;
- (void)setDonationIdentifier:(id)a0;
- (void)setBundleIdentifier:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setExpirationDate:(id)a0;
- (void)setDonationDate:(id)a0;

@end
