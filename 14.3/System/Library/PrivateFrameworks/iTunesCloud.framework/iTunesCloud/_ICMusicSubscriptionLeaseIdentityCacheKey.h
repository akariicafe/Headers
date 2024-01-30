@class NSNumber, NSString;

@interface _ICMusicSubscriptionLeaseIdentityCacheKey : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSNumber *delegatedDSID;
@property (readonly, copy, nonatomic) NSNumber *DSID;
@property (readonly, copy, nonatomic) NSString *carrierBundleDeviceIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithDSID:(id)a0 carrierBundleDeviceIdentifier:(id)a1 delegatedDSID:(id)a2;
- (BOOL)isEqual:(id)a0;

@end
