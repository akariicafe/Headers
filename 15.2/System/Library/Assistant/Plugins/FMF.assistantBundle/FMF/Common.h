@class NSString;

@interface Common : NSObject

@property (retain, nonatomic) NSString *fmfHost;
@property (nonatomic) BOOL accountInfoLoaded;
@property (nonatomic) BOOL isRenewingAccountCredentials;
@property (nonatomic) BOOL isTokenAccessible;
@property (nonatomic) BOOL isAccountPresent;
@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *personID;
@property (readonly, nonatomic) NSString *appToken;
@property (readonly, nonatomic) NSString *redirectedHost;

+ (id)sharedInstance;
+ (id)defaultCountryCode;

- (id)osVersion;
- (id)productType;
- (id)deviceUDID;
- (id)buildVersion;
- (BOOL)isLocked;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)isFMFAllowed;
- (void)clearFMFAccount;
- (BOOL)hasFMFUser;
- (BOOL)tokenIsNotAccessible;
- (BOOL)isAppRestricted;
- (void)loadAccountInfo;
- (void)redirected:(id)a0;
- (id)completeNumberForPhoneNumber:(id)a0;
- (void)flushRedirection;
- (BOOL)isHandleEmail:(id)a0;
- (id)handlesForSAPerson:(id)a0;

@end
