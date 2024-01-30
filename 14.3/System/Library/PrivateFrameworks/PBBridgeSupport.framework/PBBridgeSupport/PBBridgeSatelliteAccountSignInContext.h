@class NSString, NSDictionary;

@interface PBBridgeSatelliteAccountSignInContext : NSObject

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSDictionary *acceptedTermsInfo;
@property (retain, nonatomic) NSString *pairingParentAltDSID;
@property (retain, nonatomic) NSString *pairingParentUsername;

- (void).cxx_destruct;

@end
