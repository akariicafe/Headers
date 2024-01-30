@class NSNumber, NSDictionary;

@interface AMSSubscriptionEntitlementsResult : NSObject

@property (retain, nonatomic) NSNumber *appAdamId;
@property (retain, nonatomic) NSNumber *appVersion;
@property (retain, nonatomic) NSDictionary *entitlements;
@property (retain, nonatomic) NSDictionary *serverResponse;

- (void).cxx_destruct;
- (id)exportObject;

@end
