@class NSString;

@interface AALoginResponseiCloudTokens : NSObject

@property (readonly, nonatomic) NSString *authToken;
@property (readonly, nonatomic) NSString *fmipAuthToken;
@property (readonly, nonatomic) NSString *fmipAppToken;
@property (readonly, nonatomic) NSString *fmipLostModeToken;
@property (readonly, nonatomic) NSString *fmipSiriToken;
@property (readonly, nonatomic) NSString *fmfToken;
@property (readonly, nonatomic) NSString *fmfAppToken;
@property (readonly, nonatomic) NSString *cloudKitToken;
@property (readonly, nonatomic) NSString *mdmServerToken;
@property (readonly, nonatomic) NSString *mapsToken;
@property (readonly, nonatomic) NSString *searchPartyToken;
@property (readonly, nonatomic) NSString *keyTransparencyToken;

- (void).cxx_destruct;
- (id)initWithTokens:(id)a0;

@end
