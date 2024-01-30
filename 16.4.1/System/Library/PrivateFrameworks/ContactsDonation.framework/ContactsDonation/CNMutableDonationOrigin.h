@class NSString, NSDate;

@interface CNMutableDonationOrigin : CNDonationOrigin

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *donationIdentifier;
@property (copy, nonatomic) NSString *clusterIdentifier;
@property (copy, nonatomic) NSDate *donationDate;
@property (copy, nonatomic) NSDate *expirationDate;

+ (id)new;

- (void)setExpirationDate:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setClusterIdentifier:(id)a0;
- (void)setDonationDate:(id)a0;
- (id)init;
- (void)setBundleIdentifier:(id)a0;
- (void)setDonationIdentifier:(id)a0;

@end
