@class NSString, NSNumber, HMFPairingIdentity;

@interface HMDAirPlayAccessoryModel : HMDMediaAccessoryModel

@property (retain, nonatomic) HMFPairingIdentity *pairingIdentity;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSNumber *minimumUserPriviledge;

+ (id)properties;

@end
