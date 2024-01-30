@class NSDate, NSString, NSURL, _ICQBannerSpecification, _ICQXMLSpecification, _ICQButtonSpecification, NSDictionary, _ICQUpgradeFlowSpecification, _ICQDeviceInfo, _ICQDynamicUISpecification, _ICQFollowupSpecification;

@interface ICQOffer : NSObject <NSSecureCoding> {
    NSDictionary *_serverDictionary;
    NSDictionary *_planDetailsOverride;
    long long _actionOverride;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL iTunesAccountExists;
@property (readonly, nonatomic, getter=isBuddyOffer) BOOL buddyOffer;
@property (readonly, nonatomic, getter=isDefaultOffer) BOOL defaultOffer;
@property (readonly, nonatomic, getter=isPremiumOffer) BOOL premiumOffer;
@property (readonly, nonatomic) _ICQBannerSpecification *bannerSpecification;
@property (readonly, nonatomic) _ICQButtonSpecification *buttonSpecification;
@property (readonly, nonatomic) _ICQFollowupSpecification *followupSpecification;
@property (readonly, nonatomic) _ICQUpgradeFlowSpecification *upgradeFlowSpecification;
@property (readonly, nonatomic) _ICQXMLSpecification *XMLSpecification;
@property (retain, nonatomic) _ICQDeviceInfo *deviceInfo;
@property (retain, nonatomic) NSString *context;
@property (retain, nonatomic) NSString *appVersionId;
@property (readonly, nonatomic) NSURL *requestedServerUIURL;
@property (readonly, nonatomic) long long action;
@property (readonly, nonatomic) double _callbackInterval;
@property (retain, nonatomic) NSDate *retrievalDate;
@property (nonatomic) long long level;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *appVersionId;
@property (retain, nonatomic) NSString *accountAltDSID;
@property (retain, nonatomic) NSString *notificationID;
@property (retain, nonatomic) NSString *offerId;
@property (retain, nonatomic) _ICQBannerSpecification *bannerSpecification;
@property (retain, nonatomic) _ICQButtonSpecification *buttonSpecification;
@property (retain, nonatomic) _ICQFollowupSpecification *followupSpecification;
@property (retain, nonatomic) _ICQUpgradeFlowSpecification *upgradeFlowSpecification;
@property (retain, nonatomic) _ICQXMLSpecification *XMLSpecification;
@property (retain, nonatomic) _ICQDeviceInfo *deviceInfo;
@property (retain, nonatomic) _ICQBannerSpecification *universalLinkSpecification;
@property (retain, nonatomic) NSString *context;
@property (nonatomic) BOOL iTunesAccountExists;
@property (retain, nonatomic) NSURL *requestedServerUIURL;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) long long offerType;
@property (readonly, nonatomic) NSURL *serverUIURL;
@property (readonly, nonatomic) NSURL *remoteUIURL;
@property (readonly, nonatomic) _ICQDynamicUISpecification *dynamicUISpecification;

+ (id)sampleOfferForLevel:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithServerDictionary:(id)a0 accountAltDSID:(id)a1 notificationID:(id)a2 retrievalDate:(id)a3 callbackInterval:(double)a4 bundleIdentifier:(id)a5;
- (id)debugDescription;
- (id)alertSpecificationForAlertKey:(id)a0;
- (void).cxx_destruct;
- (id)universalLink;
- (BOOL)showsPhotoVideoCounts;
- (id)_processICQURL:(id)a0;
- (void)_updateRequestedServerUIURLWithURL:(id)a0;
- (id)alertSpecificationAtIndex:(unsigned long long)a0;
- (id)bannerSpecificationForReason:(id)a0 bundleId:(id)a1;
- (BOOL)isDetailAppBannerOffer;
- (id)journeyLinkForId:(id)a0;
- (BOOL)placeholderExists;
- (id)storagePurchaseKeybagForButtonId:(id)a0;
- (void)updateOfferWithAction:(long long)a0;
- (void)updateOfferWithPlanDetails:(id)a0 actionString:(id)a1;

@end
