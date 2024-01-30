@class NSString, NSUUID, NSData, NSDate, NSMutableArray, NSNumber;

@interface SOKerberosRealmSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *siteCodeCache;
@property (retain, nonatomic) NSString *userPrincipalName;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSUUID *credentialUUID;
@property (retain, nonatomic) NSString *cacheName;
@property (retain, nonatomic) NSData *smartCardIssuer;
@property (retain, nonatomic) NSData *smartCardSerialNumber;
@property (retain, nonatomic) NSString *smartCardTokenID;
@property (retain, nonatomic) NSDate *dateLastLogin;
@property (retain, nonatomic) NSString *datePasswordLastChanged;
@property (retain, nonatomic) NSString *dateLocalPasswordLastChanged;
@property (retain, nonatomic) NSString *datePasswordExpires;
@property (retain, nonatomic) NSString *networkHomeDirectory;
@property (retain, nonatomic) NSNumber *delayUserSetupCleared;
@property (retain, nonatomic) NSNumber *networkAvailable;
@property (retain, nonatomic) NSNumber *userCancelledLogin;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)dumpSiteCodeCache;
- (void)cacheSiteCode:(id)a0;
- (id)siteCodeForNetworkFingerprint:(id)a0;

@end
