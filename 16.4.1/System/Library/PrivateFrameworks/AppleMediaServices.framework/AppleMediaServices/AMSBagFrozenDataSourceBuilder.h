@class NSString, NSDictionary, ACAccount, NSDate, AMSProcessInfo;

@interface AMSBagFrozenDataSourceBuilder : NSObject

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSDictionary *defaultValues;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSString *profile;
@property (retain, nonatomic) NSString *profileVersion;
@property (retain, nonatomic) AMSProcessInfo *processInfo;

- (id)createFrozenBag;
- (id)createFrozenDataSource;
- (id)initWithFrozenDataSource:(id)a0;
- (void).cxx_destruct;

@end
