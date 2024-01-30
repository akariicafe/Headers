@class NSString, NSNumber, AMDURLBag;

@interface AMDEnvironment : NSObject

@property (retain, nonatomic) NSString *currentHost;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSNumber *storefrontId;
@property (retain, nonatomic) AMDURLBag *urlBag;
@property (retain, nonatomic) NSString *userId;

+ (id)shared;

- (void).cxx_destruct;
- (id)init;
- (id)getUserId;
- (id)getUrlBag;
- (id)getDomain;
- (BOOL)updateUrlBagUsingHost:(id)a0;
- (id)getCurrentHost;
- (void)setCurrentHostFromEnv:(id)a0;
- (id)getStorefrontId;

@end
