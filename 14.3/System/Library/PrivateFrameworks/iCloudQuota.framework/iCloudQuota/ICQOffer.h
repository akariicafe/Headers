@class NSDate, NSString, NSURL, _ICQBannerSpecification, _ICQXMLSpecification, _ICQButtonSpecification, NSDictionary, _ICQUpgradeFlowSpecification, _ICQDeviceInfo, _ICQFollowupSpecification;

@interface ICQOffer : NSObject <NSSecureCoding> {
    NSDictionary *_serverDictionary;
    NSDictionary *_planDetailsOverride;
    long long _actionOverride;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL iTunesAccountExists;
@property (readonly, nonatomic, getter=isBuddyOffer) BOOL buddyOffer;
@property (readonly, nonatomic) _ICQBannerSpecification *bannerSpecification;
@property (readonly, nonatomic) _ICQButtonSpecification *buttonSpecification;
@property (readonly, nonatomic) _ICQFollowupSpecification *followupSpecification;
@property (readonly, nonatomic) _ICQUpgradeFlowSpecification *upgradeFlowSpecification;
@property (readonly, nonatomic) _ICQXMLSpecification *XMLSpecification;
@property (retain, nonatomic) _ICQDeviceInfo *deviceInfo;
@property (retain, nonatomic) NSString *context;
@property (retain, nonatomic) NSString *appVersionId;
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
@property (retain, nonatomic) NSString *context;
@property (nonatomic) BOOL iTunesAccountExists;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) long long offerType;
@property (readonly, nonatomic) NSURL *remoteUIURL;

+ (id)sampleOfferForLevel:(long long)a0;

@end
