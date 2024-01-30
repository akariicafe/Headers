@class NSNumber, NSString;

@interface _ICMusicSubscriptionLeaseIdentityCacheKey : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSNumber *delegatedDSID;
@property (readonly, copy, nonatomic) NSNumber *DSID;
@property (readonly, copy, nonatomic) NSString *carrierBundleDeviceIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDSID:(id)a0 carrierBundleDeviceIdentifier:(id)a1 delegatedDSID:(id)a2;

@end
