@class NSArray, DKNotableUserDataWallet;

@interface DKNotableUserData : NSObject

@property (nonatomic) long long dataSize;
@property (retain, nonatomic) NSArray *accounts;
@property (nonatomic) BOOL findMyEnabled;
@property (retain, nonatomic) DKNotableUserDataWallet *walletData;
@property (retain, nonatomic) NSArray *cellularPlans;

- (void).cxx_destruct;

@end
