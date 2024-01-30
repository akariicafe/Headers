@class NSUUID, NSString, NSURL, HMAccessory, NSError, HMAccessoryOwnershipToken, HMSetupAccessoryPayload, HMSetupAccessoryBrowsingRequest, HMAccessoryCategory;

@interface HMSetupAccessoryDescription : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *appIdentifier;
@property (retain, nonatomic) HMSetupAccessoryPayload *setupAccessoryPayload;
@property (nonatomic) BOOL addAndSetupAccessories;
@property (nonatomic) BOOL isTrustedOrigin;
@property (retain, nonatomic) HMSetupAccessoryBrowsingRequest *accessoryBrowsingRequest;
@property (retain, nonatomic) NSString *marketingName;
@property (retain, nonatomic) NSURL *installationGuideURL;
@property (retain, nonatomic) NSString *accessoryName;
@property (retain, nonatomic) NSString *manufacturerName;
@property (retain, nonatomic) HMAccessoryCategory *category;
@property (retain, nonatomic) NSUUID *accessoryUUID;
@property (copy, nonatomic) NSString *suggestedRoomName;
@property (retain, nonatomic) NSString *storeID;
@property (retain, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *setupID;
@property (retain, nonatomic) NSString *setupCode;
@property (readonly, nonatomic) HMAccessoryOwnershipToken *ownershipToken;
@property (retain, nonatomic) NSUUID *addRequestIdentifier;
@property (nonatomic) BOOL legacyAPI;
@property (readonly, nonatomic) BOOL supportsIP;
@property (readonly, nonatomic) BOOL supportsWAC;
@property (readonly, nonatomic) BOOL supportsBTLE;
@property (readonly, nonatomic, getter=isPaired) BOOL paired;
@property (nonatomic) unsigned long long certificationStatus;
@property (nonatomic) BOOL userConsentedForReplace;
@property (weak, nonatomic) HMAccessory *accessoryBeingReplaced;
@property (retain, nonatomic) NSString *accessoryServerIdentifier;
@property (readonly, nonatomic) BOOL hasAddRequest;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, nonatomic) NSString *homeName;
@property (readonly, nonatomic) unsigned long long userConsentReasons;
@property (retain, nonatomic) NSError *cancellationReason;

+ (id)setupAccessoryProgressAsString:(long long)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithAccessoryUUID:(id)a0 accessoryName:(id)a1 appID:(id)a2 homeName:(id)a3 homeUUID:(id)a4 trustedOrigin:(BOOL)a5;
- (id)initToSetupAccessories:(id)a0 legacyAPI:(BOOL)a1 homeName:(id)a2 homeUUID:(id)a3 trustedOrigin:(BOOL)a4;
- (id)initToSetupAccessories:(id)a0 legacyAPI:(BOOL)a1 homeName:(id)a2 homeUUID:(id)a3 trustedOrigin:(BOOL)a4 browseRequest:(id)a5;
- (id)initToSetupAccessoriesWithSetupAccessoryPayload:(id)a0 appID:(id)a1 homeName:(id)a2 homeUUID:(id)a3 trustedOrigin:(BOOL)a4 ownershipToken:(id)a5;
- (id)initToSetupAccessoriesWithSetupAccessoryPayload:(id)a0 appID:(id)a1 homeName:(id)a2 homeUUID:(id)a3 trustedOrigin:(BOOL)a4 ownershipToken:(id)a5 marketingName:(id)a6 installationGuideURL:(id)a7;
- (id)initWithAccessoryUUID:(id)a0 accessoryName:(id)a1 appID:(id)a2 homeName:(id)a3 homeUUID:(id)a4;
- (id)initToSetupAccessories:(id)a0 legacyAPI:(BOOL)a1 homeName:(id)a2 homeUUID:(id)a3;
- (id)initToSetupAccessoriesWithSetupAccessoryPayload:(id)a0 appID:(id)a1 homeName:(id)a2 homeUUID:(id)a3;
- (id)initWithAddRequest:(id)a0 setupAccessoryPayload:(id)a1 appID:(id)a2 ownershipToken:(id)a3;
- (void)updateWithSetupAccessoryPayload:(id)a0;
- (void)updateWithAccessory:(id)a0;
- (void)updateOwnershipToken:(id)a0;
- (void)updateAppIdentifier:(id)a0;
- (void)updateWithMarketingName:(id)a0 installationGuideURL:(id)a1;
- (id)dumpState;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
