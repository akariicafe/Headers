@class NSString;

@interface FMFAppAccountInfo : NSObject

@property (retain, nonatomic) NSString *dsid;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *appServerHost;
@property (retain, nonatomic) NSString *appAuthToken;
@property (nonatomic) long long appAuthTokenStatus;
@property (retain, nonatomic) NSString *legacyDsid;
@property (retain, nonatomic) NSString *legacyUsername;

- (void).cxx_destruct;
- (id)description;

@end
