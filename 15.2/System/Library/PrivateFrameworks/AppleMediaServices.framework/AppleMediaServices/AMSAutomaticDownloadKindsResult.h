@class NSArray, ACAccount;

@interface AMSAutomaticDownloadKindsResult : NSObject

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSArray *enabledMediaKinds;

- (id)initWithAccount:(id)a0 andEnabledMediaKinds:(id)a1;
- (void).cxx_destruct;

@end
