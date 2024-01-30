@class NSArray, NSDictionary, AMSBagKeySet, NSDate, NSString, AMSProcessInfo;

@interface AMSBagFrozenDataSourceBuilder : NSObject

@property (retain, nonatomic) AMSBagKeySet *bagKeySet;
@property (retain, nonatomic) NSArray *cookies;
@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSString *profile;
@property (retain, nonatomic) NSString *profileVersion;
@property (retain, nonatomic) AMSProcessInfo *processInfo;

- (void).cxx_destruct;
- (id)createFrozenDataSource;
- (id)initWithFrozenDataSource:(id)a0;

@end
