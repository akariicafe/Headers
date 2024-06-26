@class NSString, NSNumber, NSArray;

@interface EDAMUserAttributes : FATObject

@property (retain, nonatomic) NSString *defaultLocationName;
@property (retain, nonatomic) NSNumber *defaultLatitude;
@property (retain, nonatomic) NSNumber *defaultLongitude;
@property (retain, nonatomic) NSNumber *preactivation;
@property (retain, nonatomic) NSArray *viewedPromotions;
@property (retain, nonatomic) NSString *incomingEmailAddress;
@property (retain, nonatomic) NSArray *recentMailedAddresses;
@property (retain, nonatomic) NSString *comments;
@property (retain, nonatomic) NSNumber *dateAgreedToTermsOfService;
@property (retain, nonatomic) NSNumber *maxReferrals;
@property (retain, nonatomic) NSNumber *referralCount;
@property (retain, nonatomic) NSString *refererCode;
@property (retain, nonatomic) NSNumber *sentEmailDate;
@property (retain, nonatomic) NSNumber *sentEmailCount;
@property (retain, nonatomic) NSNumber *dailyEmailLimit;
@property (retain, nonatomic) NSNumber *emailOptOutDate;
@property (retain, nonatomic) NSNumber *partnerEmailOptInDate;
@property (retain, nonatomic) NSString *preferredLanguage;
@property (retain, nonatomic) NSString *preferredCountry;
@property (retain, nonatomic) NSNumber *clipFullPage;
@property (retain, nonatomic) NSString *twitterUserName;
@property (retain, nonatomic) NSString *twitterId;
@property (retain, nonatomic) NSString *groupName;
@property (retain, nonatomic) NSString *recognitionLanguage;
@property (retain, nonatomic) NSString *referralProof;
@property (retain, nonatomic) NSNumber *educationalDiscount;
@property (retain, nonatomic) NSString *businessAddress;
@property (retain, nonatomic) NSNumber *hideSponsorBilling;
@property (retain, nonatomic) NSNumber *taxExempt;
@property (retain, nonatomic) NSNumber *useEmailAutoFiling;
@property (retain, nonatomic) NSNumber *reminderEmailConfig;
@property (retain, nonatomic) NSNumber *emailAddressLastConfirmed;
@property (retain, nonatomic) NSNumber *passwordUpdated;
@property (retain, nonatomic) NSNumber *salesforcePushEnabled;
@property (retain, nonatomic) NSNumber *shouldLogClientEvent;
@property (retain, nonatomic) NSNumber *optOutMachineLearning;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
