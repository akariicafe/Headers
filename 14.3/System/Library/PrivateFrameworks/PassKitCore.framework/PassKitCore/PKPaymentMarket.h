@class NSString, NSSet, NSDictionary;

@interface PKPaymentMarket : NSObject <NSSecureCoding> {
    NSDictionary *_localizedNames;
    NSDictionary *_renotifyCampaigns;
    NSSet *_geoFences;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long type;
@property (readonly) long long classification;
@property (readonly) unsigned long long expressUpgradeHideDisableAction;
@property (readonly) double expressUpgradePromoteDuration;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *region;
@property (readonly, copy) NSString *renotifyOpenLoopCampaignIdentifier;
@property (readonly, copy) NSSet *supportedCredentialTypes;
@property (readonly, copy) NSSet *expressCredentialTypes;
@property (readonly, copy) NSSet *supportedTransitNetworks;
@property (readonly, copy) NSSet *expressTransitNetworks;
@property (readonly) BOOL productsRequiredForRegion;
@property (readonly) BOOL shouldConsiderCellularRegion;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (id)initWithDictionary:(id)a0 forDeviceClass:(id)a1 version:(id)a2;
- (double)shortestDistanceFromLocation:(id)a0;
- (id)_geoFenceWithDictionary:(id)a0;
- (BOOL)containsLocation:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
